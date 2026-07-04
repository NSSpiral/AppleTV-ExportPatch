/* Runtime dump - GQZEntryUncompressedInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZEntryUncompressedInputStream : NSObject <GQZEntryInputStream>
{
    long long mOffset;
    long long mEnd;
    <GQZArchiveInputStream> * mInput;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (GQZEntryUncompressedInputStream *)initWithOffset:(long long)arg0 end:(long long)arg1 input:(NSObject *)arg2;
- (void)dealloc;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (void)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;

@end
