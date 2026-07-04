/* Runtime dump - IKColumnElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColumnElement : IKCollectionElement

@property (readonly, nonatomic) NSString * columnType;
@property (readonly, nonatomic) IKImageElement * headerImage;

- (NSString *)columnType;
- (IKImageElement *)headerImage;

@end
