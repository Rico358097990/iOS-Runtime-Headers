/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DADAMContainerIDCacheKey : NSObject <NSCopying> {
    NSString *_accountID;
    int _dataclass;
}

@property(readonly) NSString * accountID;
@property(readonly) int dataclass;


- (id)accountID;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 andDataclass:(int)arg2;
- (int)dataclass;

@end