/* Runtime dump - EMFReader
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMFReader : NSObject <MFReader>
{
    EMFPlayer * m_player;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)release;
- (void)dealloc;
- (EMFReader *)initWithEMFPlayer:(EMFPlayer *)arg0;
- (int)play:(NSData *)arg0;

@end
