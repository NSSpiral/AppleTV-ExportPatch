/* Runtime dump - CADEntityWrapper
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface CADEntityWrapper : NSObject <NSSecureCoding>
{
    int _entityType;
    int _rowID;
    NSArray * _loadedKeys;
    NSArray * _loadedValues;
    EKObjectID * _objectID;
    NSMutableDictionary * _loadedProperties;
}

+ (char)supportsSecureCoding;

- (CADEntityWrapper *)initWithCalEntity:(void *)arg0 propertiesToLoad:(id)arg1;
- (CADEntityWrapper *)initWithCalEntity:(void *)arg0;
- (NSMutableDictionary *)loadedProperties;
- (void)dealloc;
- (CADEntityWrapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (EKObjectID *)objectID;

@end
