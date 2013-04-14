//
//  main.cpp
//  WordCounter
//
//  Created by Oguzhan Gungor on 14/04/13.
//  Copyright (c) 2013 Oguzhan Gungor. All rights reserved.
//

#include <iostream>
#include "WordCounter.h"

int main(int argc, const char * argv[])
{

   string text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque tristique, risus pharetra malesuada facilisis, quam lacus imperdiet odio, sed hendrerit erat dolor non dui. Vivamus et urna vel erat lacinia tincidunt. Maecenas ut lectus nisi. Mauris malesuada diam eu mi elementum dictum. Duis ac nulla libero, et dignissim eros. Vestibulum lacinia convallis neque, ornare lacinia velit dictum eu. Quisque quam augue, molestie nec egestas sit amet, sodales eget ipsum. Vivamus non felis est. Donec eu luctus leo. Ut scelerisque ante ut ligula lobortis tincidunt eget ut tortor. Aliquam enim magna, accumsan at ultrices quis, eleifend non dolor. Cras eget lectus eu augue fermentum placerat. Curabitur libero lectus, aliquet nec viverra nec, ornare ac purus. Nullam tincidunt orci sed sapien rutrum auctor. Aenean pharetra varius nisi quis sagittis. Sed eget neque id diam tristique sollicitudin non in purus.\n Lorem ipsum dolor sit amet, consectetur adipiscing elit. Quisque tristique, risus pharetra malesuada facilisis, quam lacus imperdiet odio, sed hendrerit erat dolor non dui. Vivamus et urna vel erat lacinia tincidunt. Maecenas ut lectus nisi. Mauris malesuada diam eu mi elementum dictum. Duis ac nulla libero, et dignissim eros. Vestibulum lacinia convallis neque, ornare lacinia velit dictum eu. Quisque quam augue, molestie nec egestas sit amet, sodales eget ipsum. Vivamus non felis est. Donec eu luctus leo. Ut scelerisque ante ut ligula lobortis tincidunt eget ut tortor. Aliquam enim magna, accumsan at ultrices quis, eleifend non dolor. Cras eget lectus eu augue fermentum placerat. Curabitur libero lectus, aliquet nec viverra nec, ornare ac purus. Nullam tincidunt orci sed sapien rutrum auctor. Aenean pharetra varius nisi quis sagittis. Sed eget neque id diam tristique sollicitudin non in purus.";
    
    WordCounter *counter = new WordCounter(text);
    
    counter->count();
    
    printf("%d lines, %d words, %d chars\n",
           counter->lines(), counter->words(),
           counter->characters());
    
    delete counter;

    
    
    return EXIT_SUCCESS;
}

