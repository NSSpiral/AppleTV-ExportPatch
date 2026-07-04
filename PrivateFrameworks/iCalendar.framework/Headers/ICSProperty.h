/* Runtime dump - ICSProperty
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSProperty : NSObject <NSCoding, ICSWriting>
{
    NSMutableDictionary * _parameters;
    unsigned int _type;
    id _value;
}

- (ICSProperty *)initWithValue:(NSValue *)arg0 type:(unsigned int)arg1;
- (NSDictionary *)allParameters;
- (void)addParametersFromDictionary:(NSDictionary *)arg0;
- (NSString *)parameterValueForName:(NSString *)arg0;
- (void)setValue:(NSObject *)arg0 type:(unsigned int)arg1;
- (void)setParameterValue:(TDEffectParameterValue *)arg0 forName:(NSString *)arg1;
- (void)dealloc;
- (ICSProperty *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (unsigned int)type;
- (void *)value;
- (NSString *)stringValue;
- (NSDictionary *)ICSStringWithOptions:(unsigned int)arg0;
- (NSMutableDictionary *)parameters;
- (void)setParameters:(NSMutableDictionary *)arg0;
- (NSString *)propertiesToIncludeForChecksumVersion:(int)arg0;
- (NSString *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0;
- (id)propertiesToObscure;
- (void)ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (NSString *)parametersToIncludeForChecksumVersion:(int)arg0;
- (id)parametersToObscure;
- (char)shouldObscureValue;
- (void)removeParameterValueForName:(NSString *)arg0;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (char)alwaysHasParametersToSerialize;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1 additionalParameters:(NSDictionary *)arg2;
- (void)_appendDateTimeInDate:(NSDate *)arg0 asUTCToResult:(NSObject *)arg1;
- (void)addParameter:(ICSRoleParameter *)arg0 withRawValue:(char)arg1 options:(unsigned int)arg2;
- (void)setValueAsProperty:(NSObject *)arg0 withRawValue:(char *)arg1 options:(unsigned int)arg2;
- (char)isMultiValued;
- (void)_setParsedValues:(NSArray *)arg0 type:(unsigned int)arg1;

@end
