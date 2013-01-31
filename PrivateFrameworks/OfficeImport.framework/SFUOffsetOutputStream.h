/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <SFUOutputStream>;

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {
    <SFUOutputStream> *mOutputStream;
    long long mInitialOffset;
}


- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (id)inputStream;
- (BOOL)canCreateInputStream;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (id)closeLocalStream;
- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (void)close;
- (long long)offset;

@end