/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class VMURangeArray, NSMutableArray;

@interface VMUNonOverlappingRangeValueTable : NSObject  {
    VMURangeArray *_ranges;
    NSMutableArray *_values;
}


- (id)init;
- (id)valueForLocation:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned int)_indexForLocation:(unsigned long long)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_indexNSRangeInCandidateNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 forVMURange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_indexNSRangeForOverlappingRangesForVMURange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setValue:(id)arg1 forNonOverlappingRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2;

@end