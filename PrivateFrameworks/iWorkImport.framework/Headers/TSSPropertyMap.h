/* Runtime dump - TSSPropertyMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource>
{
    struct TSSPropertyStore * mStore;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct GQDSMap *)propertyMap;
+ (NSObject *)propertyMapWithPropertyMap:(NSObject *)arg0;
+ (NSArray *)propertyMapWithPropertiesAndValues:(int)arg0;
+ (NSDictionary *)propertyMapWithDictionary:(NSDictionary *)arg0;

- (void)filterWithProperties:(NSDictionary *)arg0;
- (void)addValuesFromPropertyMap:(NSObject *)arg0;
- (NSDictionary *)propertyMapWithProperties:(NSDictionary *)arg0;
- (void)removeValueForProperty:(int)arg0;
- (int)intValueForProperty:(int)arg0;
- (char)definesProperty:(int)arg0;
- (void)setFloatValue:(float)arg0 forProperty:(int)arg1;
- (void)setIntValue:(int)arg0 forProperty:(int)arg1;
- (char)containsProperty:(int)arg0;
- (float)floatValueForProperty:(int)arg0;
- (TSSPropertyMap *)initWithPropertyMap:(NSObject *)arg0;
- (void)minusPropertyMap:(NSObject *)arg0;
- (void)removeValuesForProperties:(NSDictionary *)arg0;
- (NSObject *)boxedObjectForProperty:(int)arg0;
- (void)setBoxedObject:(NSObject *)arg0 forProperty:(int)arg1;
- (NSObject *)propertyMapByAddingValuesFromPropertyMap:(NSObject *)arg0;
- (void)setBoolValue:(char)arg0 forProperty:(int)arg1;
- (float)CGFloatValueForProperty:(int)arg0;
- (TSSPropertyMap *)initWithPropertiesAndValues:(int)arg0;
- (double)doubleValueForProperty:(int)arg0;
- (TSSPropertyMap *)initWithFirstKey:(int)arg0 andArgumentList:(void *)arg1;
- (void)enumeratePropertiesAndObjectsUsingBlock:(id /* block */)arg0;
- (void)removeValuesFromPropertyMap:(NSObject *)arg0;
- (void)p_getAllKeys:(int *)arg0;
- (NSString *)old_description;
- (void)setDoubleValue:(double)arg0 forProperty:(int)arg1;
- (void)setCGFloatValue:(float)arg0 forProperty:(int)arg1;
- (char)containsAnyPropertyInProperties:(NSDictionary *)arg0;
- (void)removeAllPropertyValues;
- (id)diff:(id)arg0;
- (id)diffOnlyDifferences:(id)arg0;
- (NSArray *)diffPropertyNames:(id)arg0;
- (NSObject *)propertyMapByRemovingValuesFromPropertyMap:(NSObject *)arg0;
- (NSDictionary *)propertyMapByRemovingValuesForProperties:(NSDictionary *)arg0;
- (void)pSetArrayOfObjects:(NSArray *)arg0 forProperty:(NSString *)arg1;
- (void)pSetArrayOfFloats:(id)arg0 forProperty:(float)arg1;
- (void)pSetRepeatedArrayOfInts:(struct RepeatedField<int> *)arg0 forProperty:(struct RepeatedField<int>)arg1 defaultValues:(int)arg2 min:(id *)arg3 max:(int)arg4 validator:(MFAccountValidator *)arg5 usePreviousValueOnDefault:(int)arg6;
- (void)pSetArrayOfInts:(id)arg0 forProperty:(int)arg1;
- (void)pSetArrayOfBools:(id)arg0 forProperty:(BOOL)arg1;
- (void)pSetRepeatedArrayOfFloats:(struct RepeatedField<float> *)arg0 forProperty:(struct RepeatedField<float>)arg1 defaultValues:(int)arg2 validator:(MFAccountValidator *)arg3;
- (void)pSetRepeatedArrayOfInts:(struct RepeatedField<int> *)arg0 forProperty:(struct RepeatedField<int>)arg1 defaultValues:(int)arg2 min:(id *)arg3 max:(int)arg4 validator:(MFAccountValidator *)arg5;
- (void)pSetRepeatedArrayOfBools:(struct RepeatedField<bool> *)arg0 forProperty:(struct RepeatedField<bool>)arg1 defaultValues:(int)arg2 validator:(MFAccountValidator *)arg3;
- (NSArray *)allKeys;
- (void)dealloc;
- (unsigned int)count;
- (TSSPropertyMap *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setObject:(NSObject *)arg0 forProperty:(int)arg1;
- (NSObject *)objectForProperty:(int)arg0;
- (TSSPropertyMap *)initWithCapacity:(unsigned int)arg0;
- (TSSPropertyMap *)copyWithZone:(struct _NSZone *)arg0;
- (TSSPropertyMap *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSArray *)allProperties;

@end
