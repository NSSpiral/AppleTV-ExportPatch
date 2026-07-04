/* Runtime dump - UIStatusBarForegroundStyleAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarForegroundStyleAttributes : NSObject
{
    float _height;
    int _legibilityStyle;
    int _idiom;
    NSMutableDictionary * _cachedFonts;
    char _isTintColorBlack;
    char _hasBusyBackground;
    UIColor * _tintColor;
}

@property (readonly, retain, nonatomic) UIColor * tintColor;

- (void)dealloc;
- (float)scale;
- (UIImage *)imageNamed:(NSString *)arg0;
- (UIColor *)tintColor;
- (NSObject *)textColorForStyle:(int)arg0;
- (float)height;
- (int)idiom;
- (NSString *)uniqueIdentifier;
- (int)legibilityStyle;
- (UIStatusBarForegroundStyleAttributes *)initWithHeight:(float)arg0 legibilityStyle:(int)arg1 tintColor:(UIColor *)arg2 hasBusyBackground:(char)arg3 idiom:(int)arg4;
- (char)usesVerticalLayout;
- (float)edgePadding;
- (NSObject *)textFontForStyle:(int)arg0;
- (float)standardPadding;
- (float)shadowPadding;
- (NSString *)imageWithText:(NSString *)arg0 ofItemType:(int)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 withLegibilityStyle:(int)arg7 legibilityStrength:(float)arg8;
- (UIImage *)imageNamed:(NSString *)arg0 withLegibilityStyle:(int)arg1 legibilityStrength:(float)arg2;
- (NSObject *)textForNetworkType:(int)arg0;
- (NSString *)cachedImageWithText:(NSString *)arg0 forWidth:(float)arg1 lineBreakMode:(int)arg2 letterSpacing:(float)arg3 textAlignment:(int)arg4 style:(int)arg5 itemType:(int)arg6;
- (id)batteryImageNameWithCapacity:(float)arg0;
- (id)cachedImageNamed:(id)arg0 inTempGroup:(NSObject *)arg1;
- (float)batteryAccessoryMargin;
- (void)drawBatteryInsidesWithSize:(struct CGSize)arg0 capacity:(float)arg1 charging:(char)arg2;
- (void)cacheImage:(UIImage *)arg0 named:(NSString *)arg1 inTempGroup:(NSObject *)arg2;
- (id)bluetoothBatteryImageNameWithCapacity:(float)arg0;
- (void)drawBluetoothBatteryInsidesWithSize:(struct CGSize)arg0 capacity:(float)arg1;
- (float)bluetoothBatteryExtraPadding;
- (int)activityIndicatorStyleWithSyncActivity:(char)arg0;
- (float)sizeForMoonMaskVisible:(char)arg0;
- (struct CGPoint)positionForMoonMaskInBounds:(struct CGRect)arg0;
- (id)untintedImageNamed:(id)arg0;
- (struct UIEdgeInsets)edgeInsetsForBatteryInsides;
- (float)_roundDimension:(float)arg0;
- (id)_batteryColorForCapacity:(float)arg0 lowCapacity:(float)arg1 charging:(char)arg2;
- (id)uncachedImageNamed:(id)arg0;
- (struct UIEdgeInsets)edgeInsetsForBluetoothBatteryInsides;
- (float)textOffsetForStyle:(int)arg0;
- (void)_drawText:(NSString *)arg0 inRect:(struct CGRect)arg1 withFont:(struct CGSize)arg2 lineBreakMode:(int)arg3 letterSpacing:(NSNumber *)arg4 textAlignment:(int)arg5;
- (void)drawTextInRect:(struct CGRect)arg0 withColor:(struct CGSize)arg1 withBlock:(id /* block */)arg2;
- (NSString *)expandedNameForImageName:(NSString *)arg0;
- (id)_cachedImageNamed:(id)arg0;
- (void)_cacheImage:(UIImage *)arg0 named:(NSString *)arg1;
- (UIImage *)shadowImageForImage:(UIImage *)arg0 withIdentifier:(NSString *)arg1 forStyle:(int)arg2 withStrength:(float)arg3;
- (UIImage *)shadowImageForImage:(UIImage *)arg0 withIdentifier:(NSString *)arg1 forStyle:(int)arg2 withStrength:(float)arg3 inTempGroup:(NSObject *)arg4;
- (void)drawText:(NSString *)arg0 forWidth:(float)arg1 lineBreakMode:(int)arg2 letterSpacing:(float)arg3 textAlignment:(int)arg4 style:(int)arg5 textSize:(struct CGSize)arg6 textHeight:(float)arg7;
- (NSObject *)makeTextFontForStyle:(int)arg0;
- (char)_shouldUseBoldFontForStyle:(int)arg0;
- (UIFont *)proportionalFontForFont:(UIFont *)arg0;
- (UIStatusBarForegroundStyleAttributes *)initWithHeight:(float)arg0 legibilityStyle:(int)arg1 tintColor:(UIColor *)arg2 hasBusyBackground:(char)arg3;

@end
