/* Runtime dump - GQZInflateInputStream
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQZInflateInputStream : NSObject <GQZEntryInputStream>
{
    struct z_stream_s mStream;
    <GQZEntryInputStream> * mInput;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void).cxx_construct;
- (unsigned long)readToBuffer:(char *)arg0 size:(unsigned long)arg1;
- (GQZInflateInputStream *)initWithInput:(NSString *)arg0;
- (void)readToOwnBuffer:(char * *)arg0 size:(char *)arg1;

@end
