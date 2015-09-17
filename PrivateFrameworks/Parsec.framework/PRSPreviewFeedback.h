/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSPreviewFeedback : PRSFeedback {
    int _dpos;
    NSString *_fbr;
    NSString *_local_result;
}

@property (nonatomic) int dpos;
@property (nonatomic, retain) NSString *fbr;
@property (nonatomic, retain) NSString *local_result;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)dpos;
- (void)encodeWithCoder:(id)arg1;
- (id)fbr;
- (id)initWithCoder:(id)arg1;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)local_result;
- (id)plist;
- (void)setDpos:(int)arg1;
- (void)setFbr:(id)arg1;
- (void)setLocal_result:(id)arg1;
- (id)type;
- (void)validate;

@end