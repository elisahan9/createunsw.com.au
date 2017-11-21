---
layout: default
title: Team
permalink: /team/
tagline: "we are entirely composed of student volunteers."
description: CREATE is entirely composed of student volunteers.
type: section
---

<style type="text/css">
.team-cover {
  background-image: linear-gradient( rgba(0, 0, 0, 0.1), rgba(0, 0, 0, 0.1) ), url(/images/Cover/2018_team.jpg);
}
</style>

<div class="jumbotron general-cover team-cover" >
  <div class="wrapper">
    <center>
      <h1><b>TEAM</b></h1>
      <span>MEET THE <b>CREATE</b> SQUAD</span>
    </center>
  </div>
</div>

<!---- CURRENT EXECUTIVES ---->
<div class="wrapper">
{% assign status =  site.people | map: 'status' | join: ','  | split: ',' | uniq %}
{% for stat in status %}
  {% if stat == 'current_executive' %}
  <div class="postBody">
    <div class="manual-post">
      <div class="manual manual-title" id="{{ stat }}">
        <i class="fa fa-user fa-lg" aria-hidden="true"></i>
        <strong>Current Executives</strong>
      </div>
    </div><br>
    {% assign people = site.people | sort:"index" %}
    <div class="product-pod">
    {% for person in people %}
      {% if person.status contains stat %}
      <a href="{{ site.baseurl }}{{ person.url }}">
      <div class="card" >
        <img src="{{ person.face-url }}" alt="{{ person.title }}">
        <div class="profile-container">
        <b><a href="{{ site.baseurl }}{{ person.url }}">{{ person.title }}</a></b>
        <p>{{ person.role }}</p>
        {% if person.email-url  %}
          <a href="mailto:{{ person.email-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-envelope-o"></i></a>
        {% endif %}
        {% if person.linkedin-url  %}
          <a href="{{ person.linkedin-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-linkedin"></i></a>
        {% endif %}
        {% if person.github-url  %}
          <a href="{{ person.github-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-github"></i></a>
        {% endif %}
        </div>
      </div>
      </a>
      {% endif %}
    {% endfor %}
    </div>
  </div>
  {% endif %}
{% endfor %}
</div>

<!---- CURRENT CONTRIBUTORS ---->
<div class="wrapper">
{% assign status =  site.people | map: 'status' | join: ','  | split: ',' | uniq %}
{% for stat in status %}
  {% if stat == 'current_contributor' %}
  <div class="postBody">
    <div class="manual-post">
      <div class="manual manual-title" id="{{ stat }}">
        <i class="fa fa-user fa-lg" aria-hidden="true"></i>
        <strong>Current Contributors / Team Members</strong>
      </div>
    </div><br>
    {% assign people = site.people | sort:"year" | reverse %}
    <div class="product-pod">
    {% for person in people %}
      {% if person.status contains stat %}
      <a href="{{ site.baseurl }}{{ person.url }}">
      <div class="card" >
        <img src="{{ person.face-url }}" alt="{{ person.title }}">
        <div class="profile-container">
        <b><a href="{{ site.baseurl }}{{ person.url }}">{{ person.title }}</a></b>
        <p>{{ person.role }}</p>
        {% if person.email-url  %}
          <a href="mailto:{{ person.email-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-envelope-o"></i></a>
        {% endif %}
        {% if person.linkedin-url  %}
          <a href="{{ person.linkedin-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-linkedin"></i></a>
        {% endif %}
        {% if person.github-url  %}
          <a href="{{ person.github-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-github"></i></a>
        {% endif %}
        </div>
      </div>
      </a>
      {% endif %}
    {% endfor %}
    </div>
  </div>
  {% endif %}
{% endfor %}
</div>

<!---- PAST EXECUTIVES ---->
<div class="wrapper">
{% assign status =  site.people | map: 'status' | join: ','  | split: ',' | uniq %}
{% for stat in status %}
  {% if stat == 'past_executive' %}
  <div class="postBody">
    <div class="manual-post">
      <div class="manual manual-title" id="{{ stat }}">
        <i class="fa fa-user fa-lg" aria-hidden="true"></i>
        <strong>Past Executives</strong>
      </div>
    </div><br>
    {% assign people = site.people | sort:"index" %}
    <div class="product-pod">
    {% for person in people %}
      {% if person.status contains stat %}
      <a href="{{ site.baseurl }}{{ person.url }}">
      <div class="card" >
        <img src="{{ person.face-url }}" alt="{{ person.title }}">
        <div class="profile-container">
        <b><a href="{{ site.baseurl }}{{ person.url }}">{{ person.title }}</a></b>
        {% if person.content %}
          <p>{{ person.content | strip_html | truncatewords:18 }}</p>
        {% endif %}
        {% if person.email-url  %}
          <a href="mailto:{{ person.email-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-envelope-o"></i></a>
        {% endif %}
        {% if person.linkedin-url  %}
          <a href="{{ person.linkedin-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-linkedin"></i></a>
        {% endif %}
        {% if person.github-url  %}
          <a href="{{ person.github-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-github"></i></a>
        {% endif %}
        </div>
      </div>
      </a>
      {% endif %}
    {% endfor %}
    </div>
  </div>
  {% endif %}
{% endfor %}
</div>

<!---- PAST CONTRIBUTORS ---->
<div class="wrapper">
{% assign status =  site.people | map: 'status' | join: ','  | split: ',' | uniq %}
{% for stat in status %}
  {% if stat == 'past_contributor' %}
  <div class="postBody">
    <div class="manual-post">
      <div class="manual manual-title" id="{{ stat }}">
        <i class="fa fa-user fa-lg" aria-hidden="true"></i>
        <strong>Past Contributors / Team Members</strong>
      </div>
    </div><br>
    {% assign people = site.people | sort:"year" %}
    <div class="product-pod">
    {% for person in people %}
      {% if person.status contains stat %}
      <a href="{{ site.baseurl }}{{ person.url }}">
      <div class="card" >
        <img src="{{ person.face-url }}" alt="{{ person.title }}">
        <div class="profile-container">
        <b><a href="{{ site.baseurl }}{{ person.url }}">{{ person.title }}</a></b>
        <p>{{ person.role }} ({{ person.year }})</p>
        {% if person.email-url  %}
          <a href="mailto:{{ person.email-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-envelope-o"></i></a>
        {% endif %}
        {% if person.linkedin-url  %}
          <a href="{{ person.linkedin-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-linkedin"></i></a>
        {% endif %}
        {% if person.github-url  %}
          <a href="{{ person.github-url }}" target="_blank" class="btn btn-secondary"><i class="fa fa-github"></i></a>
        {% endif %}
        </div>
      </div>
      </a>
      {% endif %}
    {% endfor %}
    </div>
  </div>
  {% endif %}
{% endfor %}
</div>

<div class="wrapper">
  <div class="manual-post">
    <div class="manual manual-title">
      <hr><i class="fa fa-user fa-lg" aria-hidden="true"></i>
      <strong>All Executives</strong>
    </div>
    <div class="portfolio-content">
    <div style="display: inline">
      {% assign exec =  site.people %}
      {% for cat in exec %}
      <button class="btn btn-standard store-btn" onclick="location.href='{{ cat.url }}'"><a>{{ cat.title }}</a></button>
      {% endfor %}<hr>
    </div>
  </div>
</div>

<div class="wrapper">
  <div class="manual-post">
    <div class="manual manual-title">
      <i class="fa fa-share-square-o fa-lg" aria-hidden="true"></i>
      <strong>Our Social Presence</strong>
    </div>
    <div class="portfolio-content">
      <a href="https://www.youtube.com/user/createunsw" target="_blank"><i class="fa fa-youtube fa-5x" aria-hidden="true"></i></a>
      <a href="https://facebook.com/CreateUNSW" target="_blank"><i class="fa fa-facebook fa-5x" aria-hidden="true"></i></a>
      <a href="https://instagram.com/CreateUNSW" target="_blank"><i class="fa fa-instagram fa-5x" aria-hidden="true"></i></a>
      <a href="https://github.com/CreateUNSW" target="_blank"><i class="fa fa-github fa-5x" aria-hidden="true"></i></a>
    </div>
  </div>
</div>
