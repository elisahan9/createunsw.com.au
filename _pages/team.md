---
layout: default
title: Team
permalink: /team/
tagline: "we are entirely composed of student volunteers."
description: CREATE is entirely composed of student volunteers.
image: /images/Cover/2018_team.jpg
---

<style type="text/css">
.team-cover {
  background-image: linear-gradient( rgba(0, 0, 0, 0.1), rgba(0, 0, 0, 0.1) ), url({{page.image}});
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

<!---- 2018 EXECUTIVES ---->
<div class="wrapper">
  {% assign positions = site._people | map: 'status' | join: ','  | split: ',' | uniq %}
  {% for position in positions %}
  {% if position == 'current_executive' %}
  <div class="postBody">
    <div class="manual-post">
      <div class="manual manual-title" id="{{ stat }}">
        <strong>2018 Executive Team</strong>
      </div>
    </div><br>
    <div class="row post-list">
      {% assign people = site._people | sort:"index" %}
      {% for person in people %}
      {% if person.status contains position %}
      <div class="col-4 col-md-4 col-sm-4 post-card-col">
          <div style="background: url('{{person.face-url}}'); background-size: cover"
              class="card">
              <a href="{{person.url}}">
                <div class="post-card-contents">
                    <h2>{{ person.title }}</h2>
                    <p>{{ person.role | strip_html | truncatewords: 30}}</p>
                </div>
              </a>
          </div>
      </div>
      {% endif %}
      {% endfor %}
    </div>
  </div>
  {% endif %}
  {% endfor %}
</div>

<!---- PAST EXECUTIVES ---->
<div class="wrapper">
  {% assign positions = site._people | map: 'status' | join: ','  | split: ',' | uniq %}
  {% for position in positions %}
  {% if position == 'past_executive' %}
  <div class="postBody">
    <div class="manual-post">
      <div class="manual manual-title" id="{{ stat }}">
        <strong>Past Executives</strong>
      </div>
    </div><br>
    <div class="row post-list">
      {% assign people = site._people | sort:"index" %}
      {% for person in people %}
      {% if person.status contains position %}
      <div class="col-4 col-md-4 col-sm-4 post-card-col">
          <div style="background: url('{{person.face-url}}'); background-size: cover"
              class="card">
              <a href="{{person.url}}">
                <div class="post-card-contents">
                    <h2>{{ person.title }}</h2>
                    <p>{{ person.role | strip_html | truncatewords: 30}} ({{ person.year }})</p>
                </div>
              </a>
          </div>
      </div>
      {% endif %}
      {% endfor %}
    </div>
  </div>
  {% endif %}
  {% endfor %}
</div>

{% include page_bottom.html %}