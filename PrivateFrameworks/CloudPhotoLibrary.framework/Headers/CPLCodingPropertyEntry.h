/* Runtime dump - CPLCodingPropertyEntry
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLCodingPropertyEntry : NSObject
{
    char _propertyType;
    char _readOnly;
    NSSet * _propertyClasses;
    SEL _propertyGetter;
    SEL _propertySetter;
    /* block */ id * _propertyGetterIMP;
    /* block */ id * _propertySetterIMP;
    struct objc_ivar * _ivar;
    NSString * _structName;
}

@property (nonatomic) char propertyType;
@property (retain, nonatomic) NSSet * propertyClasses;
@property (nonatomic) SEL propertyGetter;
@property (nonatomic) SEL propertySetter;
@property (nonatomic) /* block */ id * propertyGetterIMP;
@property (nonatomic) /* block */ id * propertySetterIMP;
@property (nonatomic) struct objc_ivar * ivar;
@property (nonatomic) char readOnly;
@property (copy, nonatomic) NSString * structName;

- (struct objc_ivar *)ivar;
- (void).cxx_destruct;
- (void *)ivarAddrForObject:(NSObject *)arg0;
- (NSObject *)ivarValueForObject:(NSObject *)arg0;
- (void)setIvarValue:(id)arg0 forObject:(NSObject *)arg1;
- (NSSet *)propertyClasses;
- (void)setPropertyClasses:(NSSet *)arg0;
- (SEL)propertyGetter;
- (void)setPropertyGetter:(SEL)arg0;
- (SEL)propertySetter;
- (void)setPropertySetter:(SEL)arg0;
- (/* block */ id *)propertyGetterIMP;
- (void)setPropertyGetterIMP:(/* block */ id *)arg0;
- (/* block */ id *)propertySetterIMP;
- (void)setPropertySetterIMP:(/* block */ id *)arg0;
- (void)setIvar:(struct objc_ivar *)arg0;
- (NSString *)structName;
- (void)setStructName:(NSString *)arg0;
- (char)propertyType;
- (void)setPropertyType:(char)arg0;
- (void)setReadOnly:(char)arg0;
- (char)isReadOnly;

@end
