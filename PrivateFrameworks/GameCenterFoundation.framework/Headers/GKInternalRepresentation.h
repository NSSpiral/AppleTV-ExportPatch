/* Runtime dump - GKInternalRepresentation
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

+ (char)supportsSecureCoding;
+ (GKInternalRepresentation *)internalRepresentation;
+ (NSArray *)secureCodedPropertyKeys;
+ (NSArray *)codedPropertyKeys;

- (GKInternalRepresentation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (GKInternalRepresentation *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)serverRepresentation;
- (void)mergePropertiesFrom:(NSObject *)arg0;

@end
