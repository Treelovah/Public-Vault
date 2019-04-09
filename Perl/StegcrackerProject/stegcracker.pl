#!/usr/bin/perl
# # print "Please enter file: ";
# # chomp($fileImg=<STDIN>);
# # print "You selected $fileImg as your image\n";
# # print "Please Enter wordlist: ";
# # chomp($wordList=<STDIN>);
# chomp(my $fileImg="V4V.jpg");
#open(DATA, "wordlist.txt") or die "Couldn't open file, $!";
# my $output = "@lines";
sub brooted()
{
  print "BruteForce Camel Attack..\n";
  print "Enter File Name: ";
  chomp(my $fimg = (<>));
  print "Enter length of passwd: ";
  chomp(my $pwdl = (<>));
  print "Passwd length is $pwdl\n";
  $pwdl++;
  print "Press any key to continue.\n";
  if (<>)
  {
    my $pass = "a";
    while ( length $pass < $pwdl )
    {
      my $status = system("unzip -pp -o -P $pass $fimg > /dev/null 2>&1");
      print ("Attempting: $pass Return: $status\n");
      if ($status == 0)
      {
        print ("Password is: $pass Return is: $status\n");
        last;
      }
    }
  }
}
brooted()
