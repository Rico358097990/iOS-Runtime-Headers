/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSURL, NSString, NSData;

@interface MFMixedMessageFragment : NSObject  {
    NSString *_markupString;
    NSData *_markupData;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSURL *_baseURL;
}


- (id)markupString;
- (id)description;
- (void)dealloc;
- (id)initWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)initWithMarkupData:(id)arg1 textEncodingName:(id)arg2 baseURL:(id)arg3;
- (id)encodingName;
- (id)markupData;
- (id)baseURL;
- (id)mimeType;

@end