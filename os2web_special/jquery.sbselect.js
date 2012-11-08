jQuery(document).ready(function($) {
  $('ul.sb-list').each(function(){
    
    var list=$(this),
        select=$(document.createElement('select')).addClass('sb-select').insertBefore($(this).hide());

    $('>li a', this).each(function(){
      //var target=$(this).attr('target'),
      var option=$(document.createElement('option'))
          .appendTo(select)
          .val(this.href)
          .addClass('sb-option')
          .html($(this).html());
    });

    list.remove();
  });

  $('.sb-select').yaselect();
  $('#edit-committee').yaselect();
  
  var $select = $('.sb-select');

  var onChange = function () {
    window.location.href = $(this).parent().find('option:selected').val();
  };

  var onKeyDown = function (e) {
    $select.off('change');
    var keyCode = e.keyCode || e.which;

    if(keyCode === 13 || keyCode === 9) {
      $select.on('change', onChange).change();
    }
  };

  $select.on('change', onChange)
  .on('keydown', onKeyDown);

});