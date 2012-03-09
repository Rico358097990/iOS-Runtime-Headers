/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIMecabraCandidate : UIKeyboardCandidate  {
    void *_candidate;
}


- (id)candidate;
- (id)input;
- (id)initConversionCandidateWithSurface:(id)arg1 andInput:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (void)dealloc;
- (id)initWithMecabraCandidate:(const void*)arg1;
- (void*)mecabraCandidate;

@end