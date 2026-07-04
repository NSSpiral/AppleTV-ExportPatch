/* Runtime dump - EDBorder
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDBorder : NSObject
{
    EDResources * mResources;
    int mType;
    EDColorReference * mColorReference;
    int mDiagonalType;
}

+ (NSObject *)borderWithType:(int)arg0 colorReference:(NSObject *)arg1 resources:(NSArray *)arg2;
+ (NSObject *)borderWithType:(int)arg0 colorReference:(NSObject *)arg1 diagonalType:(int)arg2 resources:(NSArray *)arg3;
+ (NSObject *)borderWithType:(int)arg0 resources:(NSArray *)arg1;
+ (NSObject *)borderWithType:(int)arg0 color:(UIColor *)arg1 resources:(NSArray *)arg2;
+ (NSObject *)borderWithType:(int)arg0 color:(UIColor *)arg1 diagonalType:(int)arg2 resources:(NSArray *)arg3;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setType:(int)arg0;
- (int)type;
- (UIColor *)color;
- (EDBorder *)initWithResources:(NSArray *)arg0;
- (char)isEqualToBorder:(id)arg0;
- (int)diagonalType;
- (void)setDiagonalType:(int)arg0;
- (NSObject *)colorReference;

@end
