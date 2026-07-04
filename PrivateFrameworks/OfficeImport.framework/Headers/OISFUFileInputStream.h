/* Runtime dump - OISFUFileInputStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUFileInputStream : NSObject <SFUInputStream>
{
    int mFd;
    char mIsCachingDisabled;
    long long mStartOffset;
    long long mCurrentOffset;
    long long mEndOffset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (OISFUFileInputStream *)initWithPath:(NSString *)arg0 offset:(long long)arg1 length:(long long)arg2;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (OISFUFileInputStream *)initWithPath:(NSString *)arg0 offset:(long long)arg1;
- (OISFUFileInputStream *)initWithFileDescriptor:(int)arg0 offset:(long long)arg1 length:(long long)arg2;
- (char)canSeek;

@end
