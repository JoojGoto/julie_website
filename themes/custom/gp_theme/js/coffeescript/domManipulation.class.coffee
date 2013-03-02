(($, _) ->

class @DomManipulation
  constructor: (@context, @queue = 'default') ->
    @context = $(@context)
    @params =
      init: false
      $ob: $({})
  
  # check whether it is safe to fire a new method
  _safe: (init = false) ->
    # only safe to initialize if we have a DOM element and haven't already initialized
    if init and @context.length and not @params.init
      return true
    # only safe to run outside of init if we've initialized and have a DOM element
    if not init and @context.length and @params.init
      return true
    else
      return false
      
  # add functions to the correct queue in a way that returns control to the browser after each iteration
  _queue: (functions...) ->
    for f in functions
      do (f) =>
        @params.$ob.queue @queue, (next) ->
          f()
          setTimeout next
  
  # run any cleanup jobs required after calling a method
  _exit: ->
    # make sure to trigger any functions we've queued up
    @params.$ob.dequeue @queue
      
  # test if we're safe, queue some init functions and perform cleanup
  _init: (functions...) ->
    if not @_safe true
      return false
      
    for f in functions
      do (f) =>
        @_queue f
      
    @_exit()
    return @params.init = true
    
  init: ->
      @_init()
      
  debug: =>
    console.log 'context:'
    console.log @context
    console.log 'params:'
    console.log @params
    console.log 'queueName:'
    console.log @queue
    
) jQuery, _