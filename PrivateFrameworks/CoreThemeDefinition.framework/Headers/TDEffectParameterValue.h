/* Runtime dump - TDEffectParameterValue
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectParameterValue : NSManagedObject

@property (retain, nonatomic) NSNumber * intValue;
@property (retain, nonatomic) NSNumber * floatValue;
@property (retain, nonatomic) NSNumber * colorValue;
@property (retain, nonatomic) NSNumber * angleValue;
@property (retain, nonatomic) TDEffectParameterType * parameterType;
@property (retain, nonatomic) TDEffectComponent * component;

@end
