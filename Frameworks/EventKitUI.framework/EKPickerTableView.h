/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKPickerTableViewDelegate>, UIDatePicker, UITableView;

@interface EKPickerTableView : UIView {
    UIDatePicker *_datePicker;
    <EKPickerTableViewDelegate> *_delegate;
    UITableView *_tableView;
    bool_showsDatePicker;
    bool_usesKeyboard;
}

@property(readonly) UIDatePicker * datePicker;
@property <EKPickerTableViewDelegate> * delegate;
@property bool showsDatePicker;
@property(readonly) UITableView * tableView;
@property bool usesBlackDatePicker;
@property bool usesKeyboard;

- (void).cxx_destruct;
- (void)_datePickerDoubleTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForDatePicker;
- (double)_heightForDatePicker;
- (void)_updateTableContentInset;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)datePicker;
- (void)dealloc;
- (id)delegate;
- (double)heightWithDatePickerAndTableHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 tableViewController:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputView;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setShowsDatePicker:(bool)arg1 animated:(bool)arg2;
- (void)setShowsDatePicker:(bool)arg1;
- (void)setUsesBlackDatePicker:(bool)arg1;
- (void)setUsesKeyboard:(bool)arg1;
- (bool)showsDatePicker;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tableView;
- (bool)usesBlackDatePicker;
- (bool)usesKeyboard;

@end