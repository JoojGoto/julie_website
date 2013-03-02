(($, _) ->
  # jQuery passed into this closure as $
      
  class @Redpage extends @DomManipulation
    makeRed: =>
      @context.css 'background-color', 'red'
    
    init: ->
      @_init @makeRed
              
  $ ->
    # document ready in here
    page = new Redpage '#page'
    page.init()
    
   ) jQuery, _