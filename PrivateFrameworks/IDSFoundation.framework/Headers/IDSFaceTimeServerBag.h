/* Runtime dump - IDSFaceTimeServerBag
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSFaceTimeServerBag : IDSServerBag

+ (IDSFaceTimeServerBag *)_bagCreationLock;

- (IDSFaceTimeServerBag *)init;
- (NSString *)_bagDefaultsDomain;
- (char)isInDebilitatedMode;

@end
