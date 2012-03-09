/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIStoryboardSegue : NSObject  {
    NSString *_identifier;
    id _sourceViewController;
    id _destinationViewController;
}

@property(readonly) NSString * identifier;
@property(readonly) id sourceViewController;
@property(readonly) id destinationViewController;


- (void)perform;
- (void)dealloc;
- (id)destinationViewController;
- (id)sourceViewController;
- (id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3;
- (id)identifier;

@end