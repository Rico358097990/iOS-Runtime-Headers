/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableOrderedSet, NSString, NSManagedObject;

@interface _NSNotifyingWrapperMutableOrderedSet : NSMutableOrderedSet  {
    NSManagedObject *_container;
    NSString *_key;
    NSMutableOrderedSet *_mutableOrderedSet;
}


- (void)addObjectsFromArray:(id)arg1;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)description;
- (id)array;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)addObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)reversedOrderedSet;
- (void)unionOrderedSet:(id)arg1;
- (void)intersectOrderedSet:(id)arg1;
- (BOOL)isSubsetOfSet:(id)arg1;
- (BOOL)isSubsetOfOrderedSet:(id)arg1;
- (BOOL)intersectsOrderedSet:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)addObjects:(const id*)arg1 count:(unsigned int)arg2;
- (void)sortRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 options:(unsigned int)arg2 usingComparator:(id)arg3;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjects:(const id*)arg2 count:(unsigned int)arg3;
- (void)insertObjects:(id*)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (void)getObjects:(id*)arg1;
- (id)firstObject;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(id)arg2;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(id)arg3;
- (id)descriptionWithLocale:(id)arg1;
- (BOOL)isEqualToOrderedSet:(id)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(id)arg3;
- (void)minusOrderedSet:(id)arg1;
- (void)removeObjectsAtIndexes:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 options:(unsigned int)arg3 usingComparator:(id)arg4;
- (id)sortedArrayUsingComparator:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)intersectsSet:(id)arg1;
- (unsigned int)indexOfObjectPassingTest:(id)arg1;
- (void)unionSet:(id)arg1;
- (void)sortWithOptions:(unsigned int)arg1 usingComparator:(id)arg2;
- (id)objectEnumerator;
- (id)allObjects;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(id)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)indexesOfObjectsPassingTest:(id)arg1;
- (void)sortUsingComparator:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)minusSet:(id)arg1;
- (id)set;
- (id)reverseObjectEnumerator;
- (id)lastObject;
- (void)intersectSet:(id)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3;

@end