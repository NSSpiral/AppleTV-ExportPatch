/* Runtime dump - EKObjectID
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKObjectID : NSObject <NSCopying, NSSecureCoding>
{
    char _temporary;
    int _entityType;
    int _rowID;
}

+ (EKObjectID *)objectIDWithEntityType:(int)arg0 rowID:(int)arg1;
+ (EKObjectID *)objectIDWithCADObjectID:(struct ?)arg0;
+ (NSObject *)temporaryObjectIDWithEntityType:(int)arg0;
+ (EKObjectID *)objectIDWithURL:(NSString *)arg0;
+ (char)supportsSecureCoding;

- (int)rowID;
- (struct ?)CADObjectID;
- (char)isTemporary;
- (EKObjectID *)initWithEntityType:(int)arg0 rowID:(int)arg1 temporary:(char)arg2;
- (EKObjectID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (EKObjectID *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)entityType;
- (NSString *)entityName;
- (NSURL *)URIRepresentation;
- (EKObjectID *)initWithDictionaryRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)stringRepresentation;

@end
