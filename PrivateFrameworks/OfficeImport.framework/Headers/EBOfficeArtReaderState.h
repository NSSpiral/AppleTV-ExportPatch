/* Runtime dump - EBOfficeArtReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBOfficeArtReaderState : OABReaderState
{
    EBReaderState * mReaderState;
}

- (NSObject *)readerState;
- (EBOfficeArtReaderState *)initWithReaderState:(NSObject *)arg0;

@end
