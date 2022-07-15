#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

float a=0.0,bi=0.0,ci=0.0,b=0.0,c=0.0,d=0.0,e=0.0;
void display(void)
{

glClear (GL_COLOR_BUFFER_BIT);


if(a<=25)
       a=a+.005;

      else
        a=0.0;

        if(bi<=28)
       bi=bi+.006;

      else
        bi=0.0;

           if(ci<=20)
       ci=ci+.004;

      else
        ci=0.0;

if(b<=35)
       b=b+.009;

      else
        b=0.0;

 if(c<=15)
       c=c+.007;

      else
        c=0.0;
 if(d<=14)
       d=d+.007;

      else
        d=0.0;

 if(e<=10)
       e=e+.007;

      else
        e=0.0;



glColor3f (1.0, 1.0, 1.0);



glBegin(GL_QUADS);

    glColor3ub(93, 173, 226);  //sky
    glVertex2f(0,80);
    glVertex2f(0,60);
    glVertex2f(100,60);
    glVertex2f(100,80);

    glEnd();




       glutPostRedisplay();

    glPushMatrix();
    glColor3ub(255, 195, 0);
    glTranslatef(46.7,75.5, 0.0);//sun
    glutSolidSphere(4,100,2);

    glPopMatrix();
    glEnd();



glBegin(GL_LINES);

  glColor3ub(255, 195, 0);
   glVertex2f(50.8,77);//bird1
   glVertex2f(52.5,79);

    glEnd();

        glBegin(GL_LINES);

  glColor3ub(255, 195, 0);
   glVertex2f(42.6,77);//bird1
   glVertex2f(41,78.5);

    glEnd();



        glBegin(GL_LINES);

  glColor3ub(255, 195, 0);
   glVertex2f(44,72);//bird1
   glVertex2f(42.5,70);

    glEnd();

        glBegin(GL_LINES);

 glColor3ub(255, 195, 0);
   glVertex2f(49.5,72);//bird1
   glVertex2f(51,70);

    glEnd();

     glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white //cloud
    glTranslatef(23.5+a,75.5, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

     glutPostRedisplay();

    glPushMatrix();
   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(20+a,75, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

     glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(21+a,78, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(24.5+a,78, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(26.2+a,76.2, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


       glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(24.5+a,73, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(21+a,73, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();

    glPushMatrix();
   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(46.5+a,70, 0.0);//cloud-2
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();
      glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(49+a,71, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(48.5+a,68, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(45+a,68, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(43+a,71, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(44.5+a,73, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(48+a,73, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();
      glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(48+bi,70);//bird1
   glVertex2f(47+bi,71);

    glEnd();

          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(48+bi,70);//bird1
   glVertex2f(49+bi,71);

    glEnd();

          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(48.5+bi,68);//bird1
   glVertex2f(47.5+bi,68.5);

    glEnd();

          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(49.5+bi,69.5);//bird1
   glVertex2f(48.5+bi,68);

    glEnd();

          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(51+bi,72);//bird1
   glVertex2f(52+bi,71);

    glEnd();

          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(53+bi,72);//bird1
   glVertex2f(52+bi,71);

    glEnd();

      glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(55+bi,71);//bird1
   glVertex2f(54+bi,72);

    glEnd();

glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(55+bi,71);//bird1
   glVertex2f(56+bi,73);

    glEnd();

    glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(55+bi,69);//bird1
   glVertex2f(54+bi,70);

    glEnd();


    glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(55+bi,69);//bird1
   glVertex2f(56+bi,70);

    glEnd();


    glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(52+bi,68);//bird1
   glVertex2f(51+bi,69);

    glEnd();

    glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(52+bi,68);//bird1
   glVertex2f(53+bi,69);

    glEnd();



          glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white//cloud-3
    glTranslatef(87.5+a,75, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(88.5+a,72.5, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(90+a,75, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(89+a,77, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
   glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(86.5+a,76.2, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
    glTranslatef(85+a,73.5, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


    glBegin(GL_TRIANGLES);

   glColor3ub (126, 249, 60 ); //deep green
       glVertex2f(5,60);
          glVertex2f(10,68);
        glVertex2f(15,60);

    glEnd();


    glBegin(GL_TRIANGLES);

   glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(0,65);
          glVertex2f(0,60);
        glVertex2f(5,60);

    glEnd();

    glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
    glVertex2f(15,60);
    glVertex2f(17,60);  //1st tree
    glVertex2f(17,66);
    glVertex2f(15,66);

    glEnd();
  glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(16,68.5, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();

        glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
    glVertex2f(15,62.5);
    glVertex2f(15,63.5);
    glVertex2f(13,65);
    glVertex2f(13,64);

    glEnd();

     glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(12,67, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();

    glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
    glVertex2f(17,62.5);
    glVertex2f(17,63.5);
    glVertex2f(19,65);
    glVertex2f(19,64);

    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(20,67, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();

    glBegin(GL_TRIANGLES);

     glColor3ub (126, 249, 60 ); //deep green
       glVertex2f(17,60);
        glVertex2f(22,68);
        glVertex2f(28,60);

    glEnd();

        glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
    glVertex2f(28,60);
    glVertex2f(30,60);
    glVertex2f(30,65);
    glVertex2f(28,65);

    glEnd();


    glBegin(GL_TRIANGLES);

     glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(26,65);
    glVertex2f(32,65);
        glVertex2f(29,69);

    glEnd();

     glBegin(GL_TRIANGLES);

   glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(27,68);
    glVertex2f(31,68);
        glVertex2f(29,71);

    glEnd();

         glBegin(GL_TRIANGLES);

   glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(30,60);
    glVertex2f(42,60);
        glVertex2f(36,68);

    glEnd();


         glBegin(GL_TRIANGLES);

     glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(50,60);
    glVertex2f(64,60);
        glVertex2f(57,68);

    glEnd();

            glBegin(GL_QUADS);

  glColor3f(0.0, 1.0, 0.0);
   glVertex2f(60,64);
    glVertex2f(65,68);
    glVertex2f(72,60);
    glVertex2f(64,60);

    glEnd();

          glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
   glVertex2f(70,62);
    glVertex2f(70,67);
    glVertex2f(72,67);
    glVertex2f(72,60);

    glEnd();

           glBegin(GL_TRIANGLES);

   glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(68,67);
    glVertex2f(74,67);
        glVertex2f(71.5,71.5);

    glEnd();

            glBegin(GL_TRIANGLES);

   glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(68.5,70);
    glVertex2f(74,70);
        glVertex2f(71.5,73.5);

    glEnd();

                glBegin(GL_TRIANGLES);

    glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(72,60);
    glVertex2f(83,60);
        glVertex2f(77,67);

    glEnd();


          glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
   glVertex2f(83,60);
    glVertex2f(85,60);
    glVertex2f(85,67);
    glVertex2f(83,67);

    glEnd();


        glBegin(GL_TRIANGLES);
      glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(81.5,67);
    glVertex2f(86.5,67);
        glVertex2f(84,70);

    glEnd();
          glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
   glVertex2f(88,60);
    glVertex2f(90,60);
    glVertex2f(90,64);
    glVertex2f(88,64);

    glEnd();
                glBegin(GL_TRIANGLES);

      glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(87,64);
    glVertex2f(91,64);
        glVertex2f(89,67);

    glEnd();

                glBegin(GL_TRIANGLES);

      glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(87.5,66);
    glVertex2f(90.5,66);
        glVertex2f(89,68);

    glEnd();

            glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);
   glVertex2f(93,60);
    glVertex2f(95,60);
    glVertex2f(95,66);
    glVertex2f(93,66 );

    glEnd();

   glBegin(GL_TRIANGLES);

      glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(91,66);
    glVertex2f(97,66);
        glVertex2f(94,70);

    glEnd();

      glBegin(GL_TRIANGLES);

       glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(92,69);
    glVertex2f(96,69);
        glVertex2f(94,72);

    glEnd();

       glBegin(GL_TRIANGLES);

      glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(95,60);
    glVertex2f(100,60);
        glVertex2f(98,66);

    glEnd();

       glBegin(GL_TRIANGLES);

      glColor3f (0.0, 0.43, 0.0); //deep green
       glVertex2f(98,66);
    glVertex2f(100,65);
        glVertex2f(100,60);

    glEnd();
  glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black //Bird2
   glVertex2f(60+ci,70.5+ci);
   glVertex2f(62+ci,69+ci);

    glEnd();

       glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(62+ci,69+ci);
   glVertex2f(63.5+ci,71.5+ci);

    glEnd();



        glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black //Bird
   glVertex2f(65+ci,71+ci);
   glVertex2f(66+ci,70+ci);

    glEnd();

       glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(66+ci,70+ci);
   glVertex2f(68+ci,71.5+ci);

    glEnd();

        glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black //Bird
   glVertex2f(60.5+ci,72.5+ci);
   glVertex2f(62.5+ci,74.5+ci);

    glEnd();

       glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(59+ci,74+ci);
   glVertex2f(60.5+ci,72.5+ci);

    glEnd();

            glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black //Bird
   glVertex2f(66+ci,73+ci);
   glVertex2f(64.5+ci,74.5+ci);

    glEnd();

       glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(66+ci,73+ci);
   glVertex2f(68+ci,75+ci);

    glEnd();

      glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black //Bird
   glVertex2f(63+ci,76+ci);
   glVertex2f(61+ci,77+ci);

    glEnd();

       glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(63+ci,76+ci);
   glVertex2f(65+ci,77+ci);

    glEnd();


          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black //Bird
   glVertex2f(67+ci,76+ci);
   glVertex2f(66.5+ci,77+ci);

    glEnd();

       glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(67+ci,76+ci);
   glVertex2f(69.5+ci,77.5+ci);
    glEnd();
    //1 complete



 glBegin(GL_POLYGON);

 glColor3f (0.128, 0.565, 1.0);
  glVertex2f(0,60);
   glVertex2f(0,40 );
     glVertex2f(70,40);
     glVertex2f(73,50 );
     glVertex2f(70,50 );
     glVertex2f(75,60 );

  glEnd();

    glBegin(GL_POLYGON);

glColor3ub(37, 205, 37 );//Green
  glVertex2f(0,40);
   glVertex2f(0,0 );
     glVertex2f(43,0);
         glVertex2f(47,10);
     glVertex2f(45,10 );
     glVertex2f(47,25);
     glVertex2f(45,25 );
     glVertex2f(45,40);

  glEnd();


                glBegin(GL_QUADS);

  glColor3ub(82, 59, 18);
     glVertex2f(0,41);
    glVertex2f(0,40);
    glVertex2f(46,40);//border
    glVertex2f(46,41);

    glEnd();




    glBegin(GL_QUADS);

  glColor3f(1.0f, 0.5f, 0.0f);//Orange
   glVertex2f(13,22);     //house-1
    glVertex2f(28,22);
    glVertex2f(28,35);
    glVertex2f(13,35 );

    glEnd();


    glBegin(GL_QUADS);

  glColor3ub(191, 186, 177);
     glVertex2f(15,29);
    glVertex2f(18,29);//window
    glVertex2f(18,32);
     glVertex2f(15,32);

    glEnd();


    glBegin(GL_QUADS);

  glColor3ub(191, 186, 177);
     glVertex2f(23,29);
    glVertex2f(26,29);//window
    glVertex2f(26,32);
     glVertex2f(23,32);

    glEnd();




    glBegin(GL_QUADS);

   glColor3ub(160, 64, 0);//Orange
   glVertex2f(3,27);     //house-1//tree
    glVertex2f(5,27);
    glVertex2f(5,20);
    glVertex2f(3,20);

    glEnd();


           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(3.5,24.5);
   glVertex2f(3.5,22);

    glEnd();


           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(4.5,24);
   glVertex2f(4.5,21.5);

    glEnd();



      glBegin(GL_POLYGON);

 glColor3ub(160, 64, 0);//Orange
  glVertex2f(5,20);
   glVertex2f(7.2,17.2);
     glVertex2f(5,18.8);
    glVertex2f(4.5,16.5);
     glVertex2f(3.8,18.8);
     glVertex2f(1.2,17.1);
     glVertex2f(3,20);


  glEnd();

        glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(4,27.5, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(6.5,28, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();




          glutPostRedisplay();

    glPushMatrix();
   glColor3f (0.0, 0.43, 0.0);
    glTranslatef(6,31, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


          glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(3.5,32.8, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


          glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(4,30, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


          glutPostRedisplay();

    glPushMatrix();
   glColor3f (0.0, 0.43, 0.0);
    glTranslatef(1.5,31, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();


          glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(2,28, 0.0);
    glutSolidSphere(2,100,2);

    glPopMatrix();
    glEnd();

    glBegin(GL_QUADS);

   glColor3ub(160, 64, 0);//Orange
   glVertex2f(5,3);     //tree-2
    glVertex2f(5,8);
    glVertex2f(7,8);
    glVertex2f(7,3 );

    glEnd();


           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(5.5,6.5);
   glVertex2f(5.5,4.5);

    glEnd();



           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(6.5,4);
   glVertex2f(6.5,6);

    glEnd();


          glBegin(GL_POLYGON);

   glColor3ub(160, 64, 0);//Orange
  glVertex2f(7,3);
   glVertex2f(9,1);
     glVertex2f(6.2,1.8);
    glVertex2f(4,1);
     glVertex2f(5,3);
  glEnd();


           glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(6,11, 0.0);
    glutSolidSphere(3.3,100,2);

    glPopMatrix();
    glEnd();

 glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);//Orange
   glVertex2f(5,4.5);
    glVertex2f(5,5.5);
    glVertex2f(3,7);
    glVertex2f(2,6);

    glEnd();


           glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(2,8, 0.0);
    glutSolidSphere(2.6,100,2);

    glPopMatrix();
    glEnd();

     glBegin(GL_QUADS);

  glColor3ub(160, 64, 0);//Orange
   glVertex2f(7,4.5);
    glVertex2f(7,5.5);
    glVertex2f(9,7);
    glVertex2f(9,6);

    glEnd();


           glutPostRedisplay();

    glPushMatrix();
   glColor3f (0.0, 0.43, 0.0);
    glTranslatef(10,8.5, 0.0);
    glutSolidSphere(2.6,100,2);

    glPopMatrix();
    glEnd();

  glBegin(GL_QUADS);

  glColor3f (0.0, 0.43, 0.0);//green
   glVertex2f(34,10);
    glVertex2f(32.5,10);
    glVertex2f(35.5,6.5);//flower1
    glVertex2f(35.5,8);

    glEnd();


  glBegin(GL_QUADS);

  glColor3f (0.0, 0.43, 0.0);//green
   glVertex2f(35.5,6.5);
    glVertex2f(35.5,8);
    glVertex2f(37,10);
    glVertex2f(38.5,10);

    glEnd();


        glutPostRedisplay();

    glPushMatrix();
    glColor3f (1.0, 14.0, 0.0); //yellow
    glTranslatef(33,11, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


     glutPostRedisplay();

    glPushMatrix();
    glColor3f (1.0, 14.0, 0.0); //yellow
    glTranslatef(31.5,10.5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

         glutPostRedisplay();

    glPushMatrix();
    glColor3f (1.0, 14.0, 0.0); //yellow
    glTranslatef(31,11.5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


         glutPostRedisplay();

    glPushMatrix();
    glColor3f (1.0, 14.0, 0.0); //yellow
    glTranslatef(31.5,13.5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

         glutPostRedisplay();

    glPushMatrix();
    glColor3f (1.0, 14.0, 0.0); //yellow
    glTranslatef(33,13, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

         glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(38.5,11, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


         glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(37.5,12, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();
     glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(39,13, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

         glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(40,11, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

glBegin(GL_QUADS);

  glColor3f (0.0, 0.43, 0.0);//Orange
   glVertex2f(36,16);
    glVertex2f(36,17);
    glVertex2f(34,20);//flower2
    glVertex2f(33,20);

    glEnd();

glBegin(GL_QUADS);

  glColor3f (0.0, 0.43, 0.0);//Orange
   glVertex2f(36,16);
    glVertex2f(36,17);
    glVertex2f(38,20);
    glVertex2f(39,20);

    glEnd();


          glutPostRedisplay();

    glPushMatrix();
    glColor3ub(212, 156, 238 );
    glTranslatef(39,21, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
   glColor3ub(212, 156, 238 );
    glTranslatef(40.2,20, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor3ub(212, 156, 238 );
    glTranslatef(41.5,21.5, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();


          glutPostRedisplay();

    glPushMatrix();
   glColor3ub(212, 156, 238 );
    glTranslatef(40.5,22.4, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
   glColor3ub(212, 156, 238 );
    glTranslatef(38.5,22, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(33,21, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(34.5,21, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(33.6,22.5, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(32,22, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor3f(1.0, 0.0, 0.0);
    glTranslatef(32,20, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

glBegin(GL_QUADS);

  glColor3f(1.0f, 0.5f, 0.0f);//Orange
   glVertex2f(33.5,26.5);
    glVertex2f(35,26.5);
    glVertex2f(35,29);//KHOR
    glVertex2f(33.5,29);

    glEnd();

    glBegin(GL_QUADS);

  glColor3f(1.0f, 0.5f, 0.0f);//Orange
   glVertex2f(35,29);
    glVertex2f(35,28);
    glVertex2f(41.5,28);
    glVertex2f(41.5,29);

    glEnd();


    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glVertex2f(40,28);
    glVertex2f(41.5,28);
    glVertex2f(41.5,26.5);
    glVertex2f(40,26.5);

    glEnd();


    glutPostRedisplay();

    glPushMatrix();
    glColor3ub(241, 196, 15);
    glTranslatef(37.5,34.5, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
   glColor3ub(241, 196, 15);
    glTranslatef(37.5,30.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

              glutPostRedisplay();

    glPushMatrix();
   glColor3ub(241, 196, 15);
    glTranslatef(40,38, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();

    glPushMatrix();
    glColor3ub(241, 196, 15);
    glTranslatef(41.5,35, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

              glutPostRedisplay();

    glPushMatrix();
   glColor3ub(241, 196, 15);
    glTranslatef(41,31, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

              glutPostRedisplay();

    glPushMatrix();
    glColor3ub(241, 196, 15);
    glTranslatef(35.5,38, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


              glutPostRedisplay();

    glPushMatrix();
    glColor3ub(241, 196, 15);
    glTranslatef(34,34.8, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

              glutPostRedisplay();

    glPushMatrix();
    glColor3ub(241, 196, 15);
    glTranslatef(33.8,31.3, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

              glutPostRedisplay();

    glPushMatrix();
   glColor3ub(241, 196, 15);
    glTranslatef(37.8,40, 0.0);
    glutSolidSphere(1.2,100,2);

    glPopMatrix();
    glEnd();

          glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(37.8,41);
   glVertex2f(37.8,43);

    glEnd();


    glBegin(GL_QUADS);

glColor3f (0,0,0); //soil
   glVertex2f(18,22);
    glVertex2f(24,22);
    glVertex2f(24,27);
    glVertex2f(18,27 );

    glEnd();



       glBegin(GL_TRIANGLES);

glColor3f (0.627, 0.322, 0.176); //soil
       glVertex2f(11,35);
    glVertex2f(30,35);
        glVertex2f(20,44);

    glEnd();

       glBegin(GL_QUADS);

glColor3ub(202, 145, 109 );
   glVertex2f(18,22);
    glVertex2f(24,22);
    glVertex2f(24,0);
    glVertex2f(18,0 );

    glEnd();



     glBegin(GL_POLYGON);

 glColor3f (0.128, 0.565, 1.0);
  glVertex2f(70,40);
   glVertex2f(75,30 );
     glVertex2f(78,30);
     glVertex2f(73,15 );    //water
     glVertex2f(76,15 );
     glVertex2f(76,0 );
     glVertex2f(43,0 );
      glVertex2f(47,10 );
 glVertex2f(45,10 );
 glVertex2f(47,25);
  glVertex2f(45,25 );
   glVertex2f(45,40);

glEnd();



        glBegin(GL_QUADS);

  glColor3ub(84, 78, 74);//boat side
   glVertex2f(70,27);
    glVertex2f(70,22);
    glVertex2f(76,22);
    glVertex2f(77,27 );

    glEnd();

           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(71,27);
   glVertex2f(71,22);

    glEnd();


           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(72,27);
   glVertex2f(72,22);

    glEnd();


           glBegin(GL_LINES);

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(73,27);
   glVertex2f(73,22);

    glEnd();




        glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, .0);
   glVertex2f(75,60);//border
    glVertex2f(70,49);
    glVertex2f(68.5,49);
    glVertex2f(74,60 );

    glEnd();

            glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, .0);
  glVertex2f(69.5,50);//border
    glVertex2f(73,50);
    glVertex2f(72.5,49);
    glVertex2f(69,49);

    glEnd();

                glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, .0);
  glVertex2f(71.5,49);//border
    glVertex2f(72.5,49);
    glVertex2f(70,40);
    glVertex2f(69,40);

    glEnd();

                glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, .0);
 glVertex2f(70,40);
    glVertex2f(69,40);
    glVertex2f(74,29);
    glVertex2f(75,30);

    glEnd();

                glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, .0);
     glVertex2f(74,29);
    glVertex2f(75,30);
    glVertex2f(73,15);
    glVertex2f(72,14);

    glEnd();


                glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, 0.0);
     glVertex2f(72.5,14);
    glVertex2f(72,15);
    glVertex2f(76,14);
    glVertex2f(76,15);

    glEnd();



                glBegin(GL_QUADS);

  glColor3f(0.0, 0.0, 0.0);
     glVertex2f(76,15);
    glVertex2f(74.5,15);
    glVertex2f(75,0);
    glVertex2f(74,0);

    glEnd();


                glBegin(GL_QUADS);

  glColor3ub(82, 59, 18);
     glVertex2f(46,40);
    glVertex2f(45,40);
    glVertex2f(45,25);
    glVertex2f(46,25);

    glEnd();

                    glBegin(GL_QUADS);

 glColor3ub(82, 59, 18);
     glVertex2f(45,25);
    glVertex2f(45,26);
    glVertex2f(47,26);
    glVertex2f(48,25);

    glEnd();

                    glBegin(GL_QUADS);

  glColor3ub(82, 59, 18);
     glVertex2f(47,26);
    glVertex2f(48,26);
    glVertex2f(46,10);
    glVertex2f(45,10);

    glEnd();

                    glBegin(GL_QUADS);

 glColor3ub(82, 59, 18);
     glVertex2f(45,11);
    glVertex2f(45,10);
    glVertex2f(48,10);
    glVertex2f(48,11);

    glEnd();

        glBegin(GL_QUADS);

  glColor3ub(82, 59, 18);
     glVertex2f(48,10);
    glVertex2f(47,10);
    glVertex2f(43,0);
    glVertex2f(44,0);

    glEnd();

     glBegin(GL_POLYGON);

glColor3ub(37, 205, 37 );//Green
  glVertex2f(75,60);
   glVertex2f(100,60);
     glVertex2f(100,0);
     glVertex2f(75,0);
     glVertex2f(75,15 );
     glVertex2f(73,15);
     glVertex2f(78,30);
      glVertex2f(75,30 );
 glVertex2f(70,40);
 glVertex2f(73,50);
  glVertex2f(70,50 );

  glEnd();

  glBegin(GL_QUADS);

  glColor3f (0.0, 0.43, 0.0);//flower3
   glVertex2f(79,18);
    glVertex2f(78,18);
    glVertex2f(81.8,13);
    glVertex2f(81.8,14);

    glEnd();

      glBegin(GL_QUADS);

  glColor3f (0.0, 0.43, 0.0);//flower3

    glVertex2f(81.8,13);
    glVertex2f(81.8,14);
     glVertex2f(84,18);
    glVertex2f(85,18);

    glEnd();


      glutPostRedisplay();
    glPushMatrix();
    glColor3ub (108, 52, 131);
    glTranslatef(78,19, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
    glColor3ub (108, 52, 131);
    glTranslatef(108, 52, 131);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

      glutPostRedisplay();
    glPushMatrix();
    glColor3ub (108, 52, 131);
    glTranslatef(78.5,21, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
    glColor3ub (108, 52, 131);
    glTranslatef(77,20.5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
    glColor3ub (108, 52, 131);
    glTranslatef(77,18.5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();


          glutPostRedisplay();
    glPushMatrix();
    glColor3ub (246, 221, 204);
    glTranslatef(85,19, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
     glColor3ub (246, 221, 204);
    glTranslatef(86,18.5, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
     glColor3ub (246, 221, 204);
    glTranslatef(86,20, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
    glColor3ub (246, 221, 204);
    glTranslatef(85,21, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

          glutPostRedisplay();
    glPushMatrix();
     glColor3ub (246, 221, 204);
    glTranslatef(84,20, 0.0);
    glutSolidSphere(1.5,100,2);

    glPopMatrix();
    glEnd();

    glBegin(GL_QUADS); //2nd house

  glColor3f(1.0f, 0.5f, 0.0f);//Orang
   glVertex2f(85,42);
    glVertex2f(95,42);
    glVertex2f(95,50);
    glVertex2f(85,50 );

    glEnd();

    glBegin(GL_TRIANGLES);

   glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
       glVertex2f(83,50);
    glVertex2f(97,50);
        glVertex2f(90,57);

    glEnd();


    glBegin(GL_QUADS);

glColor3f (0,0,0); //soil
   glVertex2f(88,42);
    glVertex2f(92,42);
    glVertex2f(92,46);
    glVertex2f(88,46 );

    glEnd();

        glBegin(GL_QUADS);

  glColor3ub(202, 145, 109 );
   glVertex2f(88,42);
    glVertex2f(92,42);
    glVertex2f(92,33);
    glVertex2f(88,33 );

    glEnd();

        glBegin(GL_QUADS);

  glColor3ub(202, 145, 109 );
   glVertex2f(92,38);
    glVertex2f(100,38);
    glVertex2f(100,33);
    glVertex2f(92,33 );

    glEnd();


        glBegin(GL_QUADS);

   glColor3ub(160, 64, 0);//Orange
   glVertex2f(77,38);     //house-2//tree1
    glVertex2f(80,38);
    glVertex2f(80,33);
    glVertex2f(77,33 );

    glEnd();


    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(78,36);
    glVertex2f(78,34);

    glEnd();


    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(79,36);
    glVertex2f(79,34);

    glEnd();



        glBegin(GL_POLYGON);

 glColor3ub(160, 64, 0);//Green
  glVertex2f(77,33);
   glVertex2f(75,31);
     glVertex2f(78,32);
     glVertex2f(79,30.5);
     glVertex2f(80,32 );
     glVertex2f(82,31);
     glVertex2f(80,33);

  glEnd();

               glutPostRedisplay();

    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(78.5,39.5, 0.0);
    glutSolidSphere(2.6,100,2);

    glPopMatrix();
    glEnd();

        glutPostRedisplay();
    glPushMatrix();
   glColor3f (0.0, 0.43, 0.0);
    glTranslatef(75.5,39.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


        glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(75,42.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


        glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(78,43.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


        glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(75.5,39.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


        glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(80.2,43, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


        glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(81,40, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

     glBegin(GL_QUADS);

   glColor3ub(160, 64, 0);;//Orange
   glVertex2f(93,11);     //house-2//tree2
    glVertex2f(96,11);
    glVertex2f(96,16);
    glVertex2f(93,16 );

    glEnd();


    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(94,11);
    glVertex2f(94,13.5);

    glEnd();


    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(95,14.6);
    glVertex2f(95,12);

    glEnd();



    glBegin(GL_QUADS); //goru lathi

  glColor3ub(155, 108, 21);//Black
   glVertex2f(89,6);
    glVertex2f(88,6);
    glVertex2f(88,10);
    glVertex2f(89,10 );

    glEnd();




     glutPostRedisplay();
    glPushMatrix();
    glColor3ub (171, 178, 185);
    glTranslatef(81,8, 0.0);
    glutSolidSphere(3,100,2);

    glPopMatrix();
    glEnd();


            glBegin(GL_QUADS);

  glColor3ub(207, 161, 67);//Black
   glVertex2f(78,9);
    glVertex2f(78,4);
    glVertex2f(84,4);
    glVertex2f(84,9 );

    glEnd();

    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(78,7);
    glVertex2f(84,7);

    glEnd();
    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(78,6);
    glVertex2f(84,6);

    glEnd();

        glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(78,5);
    glVertex2f(84,5);

    glEnd();
        glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(78,8);
    glVertex2f(84,8);

    glEnd();

        glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(79,9);
    glVertex2f(79,4);

    glEnd();

           glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(80,9);
    glVertex2f(80,4);

    glEnd();

           glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(81,9);
    glVertex2f(81,4);

    glEnd();

           glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(82,9);
    glVertex2f(82,4);

    glEnd();


           glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 0.0);
   glVertex2f(83,9);
    glVertex2f(83,4);

    glEnd();



        glBegin(GL_POLYGON);

 glColor3ub(160, 64, 0);//Green
    glVertex2f(93,11);
   glVertex2f(91,8);
     glVertex2f(93,9);
     glVertex2f(94,7);
     glVertex2f(95,9 );
     glVertex2f(98,8);
     glVertex2f(96,11);

  glEnd();

     glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(94.5,18, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(81,40, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(92,17, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(91.8,20.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(94.5,21.5, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();


       glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(97,20, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

       glutPostRedisplay();
    glPushMatrix();
    glColor3f (0.0, 0.43, 0.0);
    glTranslatef(97.5,17.3, 0.0);
    glutSolidSphere(2.5,100,2);

    glPopMatrix();
    glEnd();

        glBegin(GL_QUADS); //boat-1

  glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(20+b,52);
    glVertex2f(21+b,50);
    glVertex2f(29+b,50);
    glVertex2f(30+b,52 );

    glEnd();


       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(21+b,53);
    glVertex2f(24+b,53);
        glVertex2f(24+b,57);

    glEnd();

       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(25+b,53);
    glVertex2f(28+b,53);
        glVertex2f(25+b,56);

    glEnd();

            glBegin(GL_QUADS); //boat-2

  glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(44+c,47);
    glVertex2f(45+c,45);
    glVertex2f(53+c,45);
    glVertex2f(54+c,47 );

    glEnd();


       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(45+c,48);
    glVertex2f(48+c,48);
        glVertex2f(48+c,52);

    glEnd();

       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(49+c,48);
    glVertex2f(49+c,51);
        glVertex2f(52+c,48);

    glEnd();

       glBegin(GL_QUADS); //boat-3

 glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(50+d,28);
    glVertex2f(50+d,30);
    glVertex2f(60+d,30);
    glVertex2f(58+d,28 );

    glEnd();

    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 1.0);
   glVertex2f(54+d,30);
    glVertex2f(54+d,34);

    glEnd();

       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(54+d,31);
    glVertex2f(54+d,34);
        glVertex2f(52+d,31);

    glEnd();

       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(54+d,31);
    glVertex2f(54+d,35);
        glVertex2f(57+d,31);

    glEnd();

           glBegin(GL_QUADS); //boat-4

  glColor3f(0.0f, 0.0f, 0.0f);//Black
   glVertex2f(54+e,18);
    glVertex2f(54+e,20);
    glVertex2f(64+e,20);
    glVertex2f(62+e,18 );

    glEnd();

    glBegin(GL_LINES);

  glColor3f(0.0, 0.0, 1.0);
   glVertex2f(58+e,20);
    glVertex2f(58+e,25);

    glEnd();

       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(58+e,21);
    glVertex2f(56+e,21);
        glVertex2f(58+e,24);

    glEnd();

       glBegin(GL_TRIANGLES);

    glColor4f(1.0f, 1.0f, 1.0f, 0.0f);//white
       glVertex2f(58+e,21);
    glVertex2f(58+e,25);
        glVertex2f(61+e,21);

    glEnd();

glFlush ();
}
void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100, 0.0, 80, -10.0, 10.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1000, 900);
glutInitWindowPosition (100, 100);
glutCreateWindow ("Final Project");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
