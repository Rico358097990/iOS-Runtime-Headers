/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFData : NSMutableData  {
    unsigned char _cfinfo[4];
    long _length;
    long _capacity;
    struct __CFAllocator { } *_bytesDeallocator;
    char *_bytes;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)retain;
- (unsigned int)length;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void*)mutableBytes;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)finalize;
- (const void*)bytes;
- (void)setLength:(unsigned int)arg1;

@end