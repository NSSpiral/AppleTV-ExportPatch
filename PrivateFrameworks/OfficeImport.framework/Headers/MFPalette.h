/* Runtime dump - MFPalette
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPalette : NSObject <MFObject>
{
    NSMutableArray * m_colours;
}

+ (MFPalette *)paletteWithColours:(id)arg0;

- (void)dealloc;
- (MFPalette *)init;
- (id)getColour:(int)arg0;
- (char)setEntries:(int)arg0 :(id)arg1;
- (char)resize:(int)arg0;
- (int)selectInto:(MFDeviceContext *)arg0;
- (MFPalette *)initWithColours:(id)arg0;

@end
