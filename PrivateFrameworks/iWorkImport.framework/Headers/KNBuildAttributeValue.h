/* Runtime dump - KNBuildAttributeValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNBuildAttributeValue : TSPObject <NSCopying>
{
    int _integerValue;
    double _doubleValue;
    char _boolValue;
    NSString * _stringValue;
    TSDPathSource * _pathSourceValue;
    TSUColor * _colorValue;
    char _definedIntegerValue;
    char _definedDoubleValue;
    char _definedBoolValue;
    char _definedStringValue;
    char _definedPathSourceValue;
    char _definedColorValue;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) <NSObject> * objectValue;
@property (readonly, nonatomic) int integerValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) char boolValue;
@property (readonly, nonatomic) NSString * stringValue;
@property (readonly, nonatomic) TSDPathSource * pathSourceValue;
@property (readonly, nonatomic) TSUColor * colorValue;

+ (KNBuildAttributeValue *)valueWithInteger:(int)arg0;
+ (KNBuildAttributeValue *)valueWithDouble:(double)arg0;
+ (KNBuildAttributeValue *)valueWithBool:(char)arg0;
+ (NSString *)valueWithString:(NSString *)arg0;
+ (KNBuildAttributeValue *)emptyValue;
+ (NSObject *)valueWithPathSource:(TSDPathSource *)arg0;
+ (UIColor *)valueWithColor:(UIColor *)arg0;

- (KNBuildAttributeValue *)initWithPathSourceValue:(TSDPathSource *)arg0;
- (KNBuildAttributeValue *)initWithColorValue:(TSUColor *)arg0;
- (KNBuildAttributeValue *)initWithIntegerValue:(int)arg0;
- (KNBuildAttributeValue *)initWithDoubleValue:(double)arg0;
- (KNBuildAttributeValue *)initWithBoolValue:(char)arg0;
- (TSDPathSource *)pathSourceValue;
- (KNBuildAttributeValue *)initWithStringValue:(NSString *)arg0;
- (char)boolValue;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (double)doubleValue;
- (int)integerValue;
- (unsigned int)type;
- (KNBuildAttributeValue *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (<NSObject> *)objectValue;
- (NSString *)stringValue;
- (TSUColor *)colorValue;

@end
