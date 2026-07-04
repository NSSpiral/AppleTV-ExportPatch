/* Runtime dump - TSUCustomFormat
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying>
{
    NSString * mFormatName;
    NSString * mFormatNameStem;
    int mFormatType;
    TSUCustomFormatData * mDefaultFormatData;
    NSMutableArray * mConditionList;
}

@property (readonly, nonatomic) int formatType;
@property (readonly, nonatomic) TSUCustomFormatData * defaultFormatData;
@property (readonly, nonatomic) unsigned int conditionCount;
@property (retain, nonatomic) NSString * formatName;
@property (readonly, nonatomic) NSMutableArray * conditionList;

- (id)conditionalFormatDataForValue:(double)arg0 outKey:(unsigned int *)arg1;
- (NSString *)conditionalFormatDataForKey:(unsigned int)arg0;
- (TSUCustomFormat *)initWithName:(NSString *)arg0 formatType:(int)arg1 data:(NSData *)arg2;
- (void)p_addConditionOfType:(int)arg0 value:(double)arg1 data:(NSData *)arg2;
- (char)p_nameStemIsEqual:(id)arg0;
- (char)p_isEqual:(id)arg0 matchingFullName:(char)arg1;
- (unsigned int)conditionCount;
- (NSString *)customFormatWithNewName:(char)arg0;
- (char)isEqualWithStemNameMatching:(id)arg0;
- (NSObject *)conditionalFormatAtIndex:(unsigned int)arg0;
- (NSMutableArray *)conditionList;
- (id)formattedBodyStringForDoubleValue:(double)arg0 customFormatListKey:(NSString *)arg1 formatType:(int)arg2 locale:(NSObject *)arg3;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSUCustomFormat *)copyWithZone:(struct _NSZone *)arg0;
- (TSUCustomFormat *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)formatType;
- (NSString *)formatName;
- (void)setFormatName:(NSString *)arg0;
- (TSUCustomFormatData *)defaultFormatData;
- (id)conditionalFormatDataForValue:(double)arg0;

@end
