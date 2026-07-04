/* Runtime dump - GQDSStyle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDSStyle : NSObject <GQDNameMappableWithDefault>
{
    GQDSStyle * mParent;
    struct GQDSMap * mPropertyMap;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (struct StateSpec *)stateForReading;
+ (struct GQDSMap *)defaultMapForStyleType:(int)arg0;
+ (NSObject *)createReplacementForMissingStyleOfType:(int)arg0;
+ (int)styleTypeForNodeName:(char *)arg0;
+ (NSObject *)createReplacementForMissingObject:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;

- (char)overridesBoolProperty:(int)arg0 value:(char *)arg1;
- (char)valueForBoolProperty:(int)arg0;
- (char)hasValueForObjectProperty:(int)arg0 value:(id *)arg1;
- (void)setPropertyMap:(struct GQDSMap *)arg0;
- (char)hasValueForBoolProperty:(int)arg0 value:(char *)arg1;
- (char)hasValueForBoolProperty:(int)arg0 value:(char *)arg1 wasOverriddenWithNull:(char *)arg2;
- (char)hasValueForIntProperty:(int)arg0 value:(int *)arg1;
- (char)hasValueForIntProperty:(int)arg0 value:(int *)arg1 wasOverriddenWithNull:(char *)arg2;
- (char)hasValueForFloatProperty:(int)arg0 value:(float *)arg1;
- (char)hasValueForFloatProperty:(int)arg0 value:(float *)arg1 wasOverriddenWithNull:(char *)arg2;
- (char)hasValueForDoubleProperty:(int)arg0 value:(double *)arg1;
- (char)hasValueForDoubleProperty:(int)arg0 value:(double *)arg1 wasOverriddenWithNull:(char *)arg2;
- (char)hasValueForObjectProperty:(int)arg0 value:(id *)arg1 wasOverriddenWithNull:(char *)arg2;
- (int)valueForIntProperty:(int)arg0;
- (char)overridesIntProperty:(int)arg0 value:(int *)arg1;
- (float)valueForFloatProperty:(int)arg0;
- (char)overridesFloatProperty:(int)arg0 value:(float *)arg1;
- (double)valueForDoubleProperty:(int)arg0;
- (char)overridesDoubleProperty:(int)arg0 value:(double *)arg1;
- (NSObject *)valueForObjectProperty:(int)arg0;
- (char)overridesObjectProperty:(int)arg0 value:(id *)arg1;
- (void)dealloc;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
