/* Runtime dump - CHDMarker
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDMarker : NSObject
{
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties * mGraphicProperties;
}

- (void)dealloc;
- (unsigned int)size;
- (CHDMarker *)init;
- (int)style;
- (void)setSize:(unsigned int)arg0;
- (void)setStyle:(int)arg0;
- (NSDictionary *)graphicProperties;
- (void)setGraphicProperties:(NSDictionary *)arg0;

@end
