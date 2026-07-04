/* Runtime dump - TSCEFunctionArgumentSpec
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFunctionArgumentSpec : NSObject <NSCopying>
{
    int mArgumentType;
    char mForceArrayMode;
    double mMinValue;
    double mMaxValue;
    char mDisallowDuration;
    char mDisallowCurrency;
    short mIndex;
    int mAccessorMode;
    int mArgumentContext;
    int mRangeContext;
    NSArray * mDisallowedTypes;
    struct vector<TSCEValue, std::__1::allocator<TSCEValue> > * mModeValues;
    short mDefaultModeIndex;
    TSCEFunctionSpec * mFunctionSpec;
    char mMinInclusive;
    char mMaxInclusive;
    char mIsInteger;
    char mReferenceForGeometryOnly;
}

@property (readonly, nonatomic) int accessorMode;
@property (readonly, nonatomic) NSArray * disallowedTypes;
@property (readonly, nonatomic) int argumentContext;
@property (nonatomic) int rangeContext;
@property (readonly, nonatomic) short index;
@property (readonly, nonatomic) double minValue;
@property (readonly, nonatomic) char minInclusive;
@property (readonly, nonatomic) double maxValue;
@property (readonly, nonatomic) char maxInclusive;
@property (readonly, nonatomic) char isInteger;
@property (readonly, nonatomic) char disallowDuration;
@property (readonly, nonatomic) char disallowCurrency;
@property (readonly, nonatomic) char isOptional;
@property (readonly, nonatomic) char referenceForGeometryOnly;
@property (readonly, nonatomic) char isMode;
@property (readonly, nonatomic) short numModes;
@property (readonly, nonatomic) short defaultModeIndex;
@property (nonatomic) TSCEFunctionSpec * functionSpec;
@property (readonly, nonatomic) char forceArrayMode;
@property (readonly, nonatomic) struct vector<TSCEValue, std::__1::allocator<TSCEValue> > * modeValues;

+ (NSObject *)argumentSpecWithIndex:(short)arg0 type:(int)arg1 accessorMode:(int)arg2 disallowedTypes:(NSArray *)arg3 argumentContext:(int)arg4 rangeContext:(int)arg5 minValue:(double)arg6 minInclusive:(char)arg7 maxValue:(double)arg8 maxInclusive:(char)arg9 isInteger:(char)arg10 disallowDuration:(char)arg11 disallowCurrency:(char)arg12 modeValues:(struct vector<TSCEValue, std::__1::allocator<TSCEValue> > *)arg13 defaultModeIndex:(struct TSCEValue *)arg14 referenceForGeometryOnly:(struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> >)arg15 forceArrayMode:(char)arg16;

- (int)accessorMode;
- (int)preferredType;
- (int)argumentContext;
- (char)disallowCurrency;
- (char)disallowDuration;
- (void)setFunctionSpec:(TSCEFunctionSpec *)arg0;
- (NSLocale *)localizedFunctionNameForLocale:(NSObject *)arg0;
- (NSArray *)disallowedTypes;
- (int)rangeContext;
- (char)minInclusive;
- (char)maxInclusive;
- (struct vector<TSCEValue, std::__1::allocator<TSCEValue> > *)modeValues;
- (short)defaultModeIndex;
- (char)referenceForGeometryOnly;
- (char)forceArrayMode;
- (TSCEFunctionArgumentSpec *)initArgumentSpecWithIndex:(short)arg0 type:(int)arg1 accessorMode:(int)arg2 disallowedTypes:(NSArray *)arg3 argumentContext:(int)arg4 rangeContext:(int)arg5 minValue:(double)arg6 minInclusive:(char)arg7 maxValue:(double)arg8 maxInclusive:(char)arg9 isInteger:(char)arg10 disallowDuration:(char)arg11 disallowCurrency:(char)arg12 modeValues:(struct vector<TSCEValue, std::__1::allocator<TSCEValue> > *)arg13 defaultModeIndex:(struct TSCEValue *)arg14 referenceForGeometryOnly:(struct __compressed_pair<TSCEValue *, std::__1::allocator<TSCEValue> >)arg15 forceArrayMode:(char)arg16;
- (NSString *)nativeSyntaxString;
- (NSLocale *)localizedToolTipStringForLocale:(NSObject *)arg0;
- (char)isMode;
- (short)numModes;
- (int)indexForModeValue:(struct TSCEValue *)arg0 locale:(NSObject *)arg1;
- (struct TSCEValue)valueForModeIndex:(short)arg0;
- (NSLocale *)localizedArgumentNameForLocale:(NSObject *)arg0;
- (int)indexForModeString:(NSString *)arg0 locale:(NSObject *)arg1;
- (int)indexForModeNumber:(double)arg0 locale:(NSObject *)arg1;
- (int)indexForModeBool:(char)arg0 locale:(NSObject *)arg1;
- (NSObject *)nativeSyntaxStringForModeIndex:(short)arg0;
- (NSObject *)localizedModeNameForModeIndex:(short)arg0 locale:(NSObject *)arg1;
- (NSObject *)localizedModeToolTipStringForModeIndex:(short)arg0 locale:(NSObject *)arg1;
- (NSObject *)localizedModeMenuItemStringForModeIndex:(short)arg0 locale:(NSObject *)arg1;
- (char)typeIsDisallowed:(int)arg0 value:(struct TSCEValue *)arg1;
- (void)setRangeContext:(int)arg0;
- (TSCEFunctionSpec *)functionSpec;
- (char)isOptional;
- (void)dealloc;
- (TSCEFunctionArgumentSpec *)copyWithZone:(struct _NSZone *)arg0;
- (double)minValue;
- (short)index;
- (double)maxValue;
- (char)isInteger;

@end
