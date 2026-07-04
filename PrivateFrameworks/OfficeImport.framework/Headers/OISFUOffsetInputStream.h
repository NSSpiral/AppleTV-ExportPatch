/* Runtime dump - OISFUOffsetInputStream
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OISFUOffsetInputStream : NSObject <SFUInputStream>
{
    <SFUInputStream> * mInputStream;
    long long mInitialOffset;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (long long)offset;
- (void)close;
- (OISFUOffsetInputStream *)initWithInputStream:(NSObject *)arg0;
- (OISFUOffsetInputStream *)initWithInputStream:(NSObject *)arg0 initialOffset:(long long)arg1;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (char)canSeek;

@end
