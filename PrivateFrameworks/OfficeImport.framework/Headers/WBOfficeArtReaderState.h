/* Runtime dump - WBOfficeArtReaderState
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBOfficeArtReaderState : OABReaderState
{
    WBReader * mReader;
    int mCurrentTextType;
}

@property (nonatomic) WBReader * reader;
@property (nonatomic) int currentTextType;

- (WBOfficeArtReaderState *)initWithClient:(Class)arg0;
- (WBReader *)reader;
- (void)setReader:(WBReader *)arg0;
- (void)setCurrentTextType:(int)arg0;
- (int)currentTextType;

@end
