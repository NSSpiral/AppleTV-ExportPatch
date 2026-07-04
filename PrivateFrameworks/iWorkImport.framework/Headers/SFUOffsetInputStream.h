/* Runtime dump - SFUOffsetInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUOffsetInputStream : NSObject <SFUInputStream>
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
- (SFUOffsetInputStream *)initWithInputStream:(NSObject *)arg0;
- (SFUOffsetInputStream *)initWithInputStream:(NSObject *)arg0 initialOffset:(long long)arg1;
- (void)seekToOffset:(long long)arg0;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (NSObject *)closeLocalStream;
- (char)canSeek;

@end
