/* Runtime dump - IKSectionElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKSectionElement : IKViewElement
{
    NSArray * _items;
}

@property (readonly, retain, nonatomic) IKHeaderElement * header;
@property (readonly, retain, nonatomic) NSArray * items;

- (NSArray *)items;
- (void).cxx_destruct;
- (NSObject *)applyUpdatesWithElement:(NSObject *)arg0;
- (IKHeaderElement *)header;

@end
