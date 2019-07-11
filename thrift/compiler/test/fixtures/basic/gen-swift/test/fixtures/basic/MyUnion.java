/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.basic;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

import static com.google.common.base.MoreObjects.toStringHelper;

@SwiftGenerated
@ThriftUnion("MyUnion")
public final class MyUnion {
    private Object value;
    private short id;
    private String name;
    
    @ThriftConstructor
    public MyUnion() {
    }
    
    @ThriftConstructor
    @Deprecated
    public MyUnion(final test.fixtures.basic.MyEnum myEnum) {
        this.value = myEnum;
        this.id = 1;
        this.name = "myEnum";
    }
    
    @ThriftConstructor
    @Deprecated
    public MyUnion(final test.fixtures.basic.MyStruct myStruct) {
        this.value = myStruct;
        this.id = 2;
        this.name = "myStruct";
    }
    
    @ThriftConstructor
    @Deprecated
    public MyUnion(final test.fixtures.basic.MyDataItem myDataItem) {
        this.value = myDataItem;
        this.id = 3;
        this.name = "myDataItem";
    }
    
    public static MyUnion fromMyEnum(final test.fixtures.basic.MyEnum myEnum) {
        MyUnion res = new MyUnion();
        res.value = myEnum;
        res.id = 1;
        res.name = "myEnum";
        return res;
    }
    
    public static MyUnion fromMyStruct(final test.fixtures.basic.MyStruct myStruct) {
        MyUnion res = new MyUnion();
        res.value = myStruct;
        res.id = 2;
        res.name = "myStruct";
        return res;
    }
    
    public static MyUnion fromMyDataItem(final test.fixtures.basic.MyDataItem myDataItem) {
        MyUnion res = new MyUnion();
        res.value = myDataItem;
        res.id = 3;
        res.name = "myDataItem";
        return res;
    }
    

    @ThriftField(value=1, name="myEnum", requiredness=Requiredness.NONE)
    public test.fixtures.basic.MyEnum getMyEnum() {
        if (this.id != 1) {
            throw new IllegalStateException("Not a myEnum element!");
        }
        return (test.fixtures.basic.MyEnum) value;
    }

    public boolean isSetMyEnum() {
        return this.id == 1;
    }

    @ThriftField(value=2, name="myStruct", requiredness=Requiredness.NONE)
    public test.fixtures.basic.MyStruct getMyStruct() {
        if (this.id != 2) {
            throw new IllegalStateException("Not a myStruct element!");
        }
        return (test.fixtures.basic.MyStruct) value;
    }

    public boolean isSetMyStruct() {
        return this.id == 2;
    }

    @ThriftField(value=3, name="myDataItem", requiredness=Requiredness.NONE)
    public test.fixtures.basic.MyDataItem getMyDataItem() {
        if (this.id != 3) {
            throw new IllegalStateException("Not a myDataItem element!");
        }
        return (test.fixtures.basic.MyDataItem) value;
    }

    public boolean isSetMyDataItem() {
        return this.id == 3;
    }

    @ThriftUnionId
    public short getThriftId() {
        return this.id;
    }

    public String getThriftName() {
        return this.name;
    }

    @Override
    public String toString() {
        return toStringHelper(this)
            .add("value", value)
            .add("id", id)
            .add("name", name)
            .add("type", value == null ? "<null>" : value.getClass().getSimpleName())
            .toString();
    }

    @Override
    public boolean equals(Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }

        MyUnion other = (MyUnion)o;

        return Objects.equals(this.id, other.id)
                && Objects.deepEquals(this.value, other.value)
                && Objects.equals(this.name, other.name);
    }

    @Override
    public int hashCode() {
        return Arrays.deepHashCode(new Object[] {
            id,
            value,
            name
        });
    }
}
