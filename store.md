---
layout: default
title: Store
tagline: "Orders can be bought and collected from our Globe Lawn stall on Mondays from 12pm to 4pm during semester time only."
description: Orders can be bought and collected from our Globe Lawn stall on Mondays from 12pm to 4pm during semester time only.
type: section
---

<style type="text/css">
.store-cover {
	background-image: linear-gradient( rgba(0, 0, 0, 0.2), rgba(0, 0, 0, 0.2) ), url(/images/Cover/store.jpg);
}
</style>

<div class="jumbotron general-cover store-cover" >
  <div class="wrapper">
    <center>
      <h1><b>STORE</b></h1>
      <span>TOOLS / <b>QUADCOPTERS</b> / ELECTRONICS</span>
    </center>
  </div>
</div>

<div class="wrapper">


<div class="str-sub">
<br>Orders can be bought and collected from our Globe Lawn stall or at MCIC on rainy days on <b>Mondays from 12pm to 4pm during semester time only</b>. If a collection is urgently needed, we can pre-arrange a collection time via email at <b>sales@createunsw.com.au</b>.
<br><br>You can also purchase from the vending machine that's located in MCIC when ever it's open.
<br><br>Talk to us before purchasing anything through this page. We may not have all items in stock.
<br><br>Please note: This service is primarily for UNSW students and staff only. Generally speaking, we do not ship orders. If you are outside of UNSW, please email your enquiry to sales@createunsw.com.au.
</div>


<div style="display: inline"><hr>
	{% assign cats =  site.products | map: 'category' | join: ','  | split: ',' | uniq %}
	{% for cat in cats %}
	<button class="btn btn-standard store-btn" onclick="location.href='#{{ cat }}'"><a>{{ cat }}</a></button>
	{% endfor %}<hr>
</div>

<div style="margin: 0 auto;">
	{% assign cats =  site.products | map: 'category' | join: ','  | split: ',' | uniq %}
    {% for cat in cats %}
	    <div class="postBody">
			<div class="manual-post">
				<div class="manual manual-title" id="{{ cat }}">
			 		<strong>{{ cat }}</strong>
				</div>
			</div><br>
			{% assign products = site.products | sort:"title" %}
	    	<div class="product-pod">
		    {% for post in products%}
		    	{% if post.category contains cat %}

				<div class="card" style="width: 225px; height: auto;">
			    	<a href="{{ site.baseurl }}{{ post.url }}" alt="{{ post.title }}">
					 	<img class="card-img-top" src="{% if post.image %} {{ post.image }} {% else %} {{ '/images/Sales/no-photo.jpg' }} {% endif %}" alt="{{ post.title }}">
			    	<b class="card-title" style="padding: 10px;">{{ post.title }}</b>
					</a>

				  	<div class="card-block" style="padding: 10px;">
					    <p class="card-text">{{ post.content | strip_html | truncatewords:10}}</p>

						<div style="display: inline">
							<form target='paypal' action='https://www.paypal.com/cgi-bin/webscr' method='post'>
								<input type='hidden' name='add' value='1'>
								<input type='hidden' name='cmd' value='_cart'>
								<input type='hidden' name='business' value='sales@createunsw.com.au' />
								<input type='hidden' name='item_name' value='{{ post.title }}' />
								<input type='hidden' name='item_number' value='' />
								<input type='hidden' name='amount' value='{{ post.price }}' />
								<input type='hidden' name='no_note' value='1' />
								<input type='hidden' name='currency_code' value='AUD' />
								<input type='hidden' name='lc' value='AU'><input style="width:40px;" type='number' name='quantity' value='1' min="1">
								<button class="btn btn-secondary" type='submit' name='submit' alt='Add this item to your paypal cart.' value='Purchase' >
									<i class="fa fa-shopping-cart" aria-hidden="true"></i>
								</button>
									{% assign price_split = post.price | round: 2 | split: "." %}
									{% assign integral = price_split[0] %}
									{% assign fractional = price_split[1] | append: "00" | truncate: 2, "" %}
								    <div style="float:right">${{ integral }}.{{ fractional }} AUD</div>
								</form>
							</div>
					  </div>
				</div>
	    		{% endif %}
   			 {% endfor %}
			</div>
		</div>
	{% endfor %}
</div>

</div>
