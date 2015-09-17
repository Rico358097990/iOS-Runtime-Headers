/* Generated by RuntimeBrowser.
 */

@protocol WebDocumentRepresentation <NSObject>

@required

- (BOOL)canProvideDocumentSource;
- (NSString *)documentSource;
- (void)finishedLoadingWithDataSource:(WebDataSource *)arg1;
- (void)receivedData:(NSData *)arg1 withDataSource:(WebDataSource *)arg2;
- (void)receivedError:(NSError *)arg1 withDataSource:(WebDataSource *)arg2;
- (void)setDataSource:(WebDataSource *)arg1;
- (NSString *)title;

@end