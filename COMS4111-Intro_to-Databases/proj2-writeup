proj2 README

1. postgreSQL account: vf2272 

2. Three modification:

    a. text attribute:
        Alter table post_belongs_uploads 
        Add document text NOT NULL;

        We altered the post_belong_uploads relation to include a text attribute called documents.
        Each post now contains a document with important information.
        We originally planned to implement a document subtype under post (posts containing documents),
        but were unable to, given our limited data type knowledge.
        All posts will now contain a text document with important information.
        Documents will include important information regarding assignments, exams, deadlines, reminders, etc.
        Students can comment and discuss on posts containing documents with relevant information.
        All comments will now belong to a post, and will be uniquely identified by comment number on the post.
        The comment primary key is altered to (cNum, pNum, cname, prof, term).
        All existing comments will be moved to the first post P with P.doc = 'Proj1 comments'

    b, c. composite type and array attribute:
        create type exams_type as (
        scores integer[],
        taken date[],
        uni varchar(7),
        cname varchar(20),
        prof varchar(20),
        term varchar(10)
        );

        create table exams of exams_type ( 
        Primary key (uni, cname, prof, term), 
        Foreign key (uni) references students,
        foreign key (cname, prof, term) references class_partof,
        check (cardinality(scores) = cardinality(taken)), check (cardinality(scores) > 0)
        );

        We created exams_type as a unique exam table. Students can report exam scores in different scenarios, 
        e.g. a student has taken a class already (and has unfollowed a class).
        The student needs to report their exam score(s) and the date(s) of the exam(s) taken, uni, classname, prof,
        term as an integer and date array. Students can report their scores throughout the semester as an array of 
        dates and scores. The arrays must have the same cardinality and contain at least one element.
        The table allows students to track their progress and check a class' overall performance throughout a semester.

3. Queries:

    Select *
    From exams
    Where 65 < all (scores);
    -The query selects tuples from the exams table where students scored at least a 65 on all of their exams.
    It can be used to calculate the number of students expected to pass a class (when only considering exam scores).

    Select *
    From post_belongs_uploads
    Where to_tsvector(document) @@ to_tsquery(‘exam | midterm | final’);
    -The query selects tuples from the post_belongs_uploads tables where exams, midterms, or finals are mentioned 
    in the text document. The query is particularly useful when searching for comments and discussions regarding upcoming exams.
    Students can also post questions in the comments section about exams.

    Select *
    From post_belongs_uploads
    Where to_tsvector(document) @@ to_tsquery(‘project | homework | pset | read’);
    The query selects tuples from post_belongs_uploads where projects, homework, psets, 
    or readings are mentioned in the text document.

    Select *
    From post_belongs_uploads
    Where to_tsvector(document) @@ to_tsquery(‘cancelled’);
    -The query selects tuples from post_belongs_uploads where ‘cancelled’ is mentioned in the text document.

    Select *
    From post_belongs_uploads
    Where to_tsvector(document) @@ to_tsquery(‘proj1 comments’);
    -The query selects tuples from post_belongs_uploads where ‘proj1 comments’ is mentioned in the text document.