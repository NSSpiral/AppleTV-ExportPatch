/* Runtime dump - TSCEFunctionSpec
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFunctionSpec : NSObject
{
    NSString * mFunctionName;
    short mMinArguments;
    short mMaxArguments;
    short mRepeatingGroupSize;
    NSArray * mArguments;
    NSArray * mRepeatingArguments;
    char mIsOperator;
    int mShipVersion;
    int mFunctionIndex;
}

@property (readonly, nonatomic) NSString * functionName;
@property (readonly) int functionIndex;
@property (readonly, nonatomic) NSArray * arguments;
@property (readonly, nonatomic) short minArguments;
@property (readonly, nonatomic) short maxArguments;
@property (readonly, nonatomic) unsigned int numArguments;
@property (readonly, nonatomic) char isOperator;
@property (readonly, nonatomic) int versionShippedIn;
@property (readonly, nonatomic) short repeatingGroupSize;

+ (NSDictionary *)specDictionary;
+ (NSString *)specWithFunctionName:(NSString *)arg0 minArgs:(id)arg1 maxArgs:(id)arg2 repeatingGroupSize:(short)arg3 isOperator:(int)arg4 shipVersion:(int)arg5 arguments:(NSArray *)arg6 functionIndex:(int)arg7;
+ (NSObject *)functionSpecForFunctionIndex:(int)arg0;

- (TSCEFunctionSpec *)initWithFunctionName:(NSString *)arg0 minArgs:(int)arg1 maxArgs:(int)arg2 repeatingGroupSize:(int)arg3 isOperator:(char)arg4 shipVersion:(int)arg5 arguments:(NSArray *)arg6 functionIndex:(int)arg7;
- (NSLocale *)localizedFunctionNameForLocale:(NSObject *)arg0;
- (NSObject *)argumentSpecForIndex:(unsigned int)arg0;
- (void)p_ValidateArguments;
- (NSLocale *)localizedToolTipStringForLocale:(NSObject *)arg0;
- (NSLocale *)displayStringForLocale:(NSObject *)arg0;
- (id)nativeSyntaxStringForArgument:(int)arg0;
- (int)functionIndex;
- (short)minArguments;
- (short)maxArguments;
- (char)isOperator;
- (int)versionShippedIn;
- (short)repeatingGroupSize;
- (unsigned int)numArguments;
- (void)dealloc;
- (NSString *)description;
- (NSString *)functionName;
- (NSArray *)arguments;

@end
