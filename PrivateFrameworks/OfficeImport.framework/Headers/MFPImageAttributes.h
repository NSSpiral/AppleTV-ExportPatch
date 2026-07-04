/* Runtime dump - MFPImageAttributes
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFPImageAttributes : NSObject
{
    NSMutableDictionary * mColorAdjustMap;
}

- (void)dealloc;
- (MFPImageAttributes *)init;
- (NSObject *)colorAdjustWithType:(int)arg0;
- (NSObject *)ensureColorAdjustWithType:(int)arg0;

@end
