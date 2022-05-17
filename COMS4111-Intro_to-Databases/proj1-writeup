Proj1-3 README
 
1. postgreSQL uni: vf2272
 
2. Webapp URL: http://35.196.4.19:8111/
 
3.  Parts implemented:
    All of the parts we planned on implementing from part1 are included in part3 with one exception.
    In our application, students can create profiles by registering an account with their uni, name, email, 
    and year of graduation. As per our part1 description, registered students can:
 
        1) Upload a post
        2) Rate a classes
        3) Follow a class
        4) View class posts
 
    All arguments must be provided for given features with the exception of the class search feature (which only requires uni).
    The only part we failed to implement in our application is the "Document" Entity and "Download Document" tool. 
    The feature was not implemented because storing and retrieving files, such as PDFs, from the postgreSQL DB proved to be more 
    difficult than expected. Database file storage mechanisms did not seem to be at the core of the project, so we decided to replace 
    the "Download Document" feature with "Save Post". At their core, the features perform the same function (one saves documents
    while the other saves comments). All posts in the webapp are “Comment” entities, though not all posts in the postgreSQL DB 
    are “Comment” entities because we attempted to incorporate “Document” entities in part2 (part3 was simply built on top of the part2 DB).
    One feature that was not specified in part1 but was incorporated anyways was the class search feature. Classes can be searched by
    maximum and minimum given ratings, (substrings of) department name, (substrings of) class name, (substrings of) professor name, or (substrings of) term.
 
 
4.
      1. Search for Classes
        The class search webpage/feature requires some of the most interesting database operations. Searching and following classes is at the core of
        our application. The class search feature allows for classes to be queried in various ways depending on the arguments posted on the search form. 
        Classes can be searched by rating, department, class name, professor, or term. The rating query provides a minimum and maximum possible range of 
        values for a classes' given ratings. The queries for department name, class name, professor, and term list unique instances of classes 
        where the query arguments are substrings of the classes' real values. For example, searching for a class (class_partof C) with "Econ" as the 
        department name will return all classes with "Economics" as department name. To display classes, the webpage/feature takes all form arguments with length 
        greater than 0, searches for class by propogating the argument/constraint (e.g. as finding all classes with term="Fall"), and finding/displaying the intersection
        between the classes that result from the constraint propogation. The search for class feature handles substring arguments and numerous queries of varying data types, 
        which is why I find it to be the most interesting. 
 
    2. Upload Post
        The upload post webpage/feature also requires some of the most interesting database operations because it allows for direct user interaction with the database 
        and other users' pages. When a user uploads a comment to a class page, the comment directly populates the database and pages of classmates 
        (an instance of post/comment is added to the class page). The direct interaction between the user and the DB/feed of other users makes it unlike any other feature.
        Additionally, the "comment" argument can be any given string (up to a certain length), while all other arguments must be in the domain of class names, professor, terms, etc.
        The user's freedom to populate the feed of others, class page, and DB with whatever comment they choose, makes the upload post feature one of the most interesting operations.
 

