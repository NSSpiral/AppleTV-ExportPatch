/* Runtime dump - IKCollectionElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCollectionElement : IKViewElement
{
    NSArray * _sections;
}

@property (readonly, retain, nonatomic) IKHeaderElement * header;
@property (readonly, retain, nonatomic) NSArray * sections;

- (void).cxx_destruct;
- (NSArray *)sections;
- (NSObject *)applyUpdatesWithElement:(NSObject *)arg0;
- (IKHeaderElement *)header;

@end
