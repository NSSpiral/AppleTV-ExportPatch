/* Runtime dump - PTSEditFloatRow
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSEditFloatRow : PTSRow
{
    unsigned int _precision;
}

@property (nonatomic) unsigned int precision;

- (unsigned int)precision;
- (void)setPrecision:(unsigned int)arg0;
- (PTSEditFloatRow *)init;
- (id)precision:(unsigned int)arg0;
- (void)updateWithRow:(id)arg0;
- (id)between:(float)arg0 and:(float)arg1;
- (Class)rowTableViewCellClass;

@end
