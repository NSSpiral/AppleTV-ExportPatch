/* Runtime dump - IKShelfElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKShelfElement : IKCollectionElement

@property (readonly, nonatomic) unsigned int columnCount;
@property (readonly, nonatomic) char isCentered;
@property (readonly, nonatomic) NSString * rowHeight;

- (NSString *)rowHeight;
- (unsigned int)columnCount;
- (char)isCentered;

@end
