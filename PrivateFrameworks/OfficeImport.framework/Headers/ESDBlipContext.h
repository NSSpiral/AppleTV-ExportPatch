/* Runtime dump - ESDBlipContext
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext>
{
    struct SsrwOOStream * mStream;
    unsigned int mStreamID;
    unsigned int mStartOffset;
    unsigned int mByteCount;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (struct SsrwOOStream *)stream;
- (BOOL)loadDelayedNode:(OCDDelayedNode *)arg0;
- (OISFUDataRepresentation *)dataRep;
- (ESDBlipContext *)initWithOffset:(unsigned int)arg0 byteCount:(unsigned int)arg1 stream:(struct SsrwOOStream *)arg2 streamID:(unsigned int)arg3;
- (BOOL)saveDelayedMedia:(OCDDelayedMedia *)arg0 toFile:(NSURL *)arg1;

@end
